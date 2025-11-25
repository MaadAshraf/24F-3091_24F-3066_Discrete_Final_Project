#include "m4.h"
void M4::addRule(const string& a, const string& b) {
    rules.push_back({ a, b });
}
void M4::addFact(const string& fact) {
    facts.push_back(fact);
}
bool M4::inferHelper(const string& query, vector<string>& visited) {
    for (int i = 0; i < visited.size(); i++) {
        if (visited[i] == query) {
            return false;
        }
    }
    visited.push_back(query);
    for (int i = 0; i < facts.size(); i++) {
        if (facts[i] == query) {
            return true;
        }
    }
    for (int i = 0; i < rules.size(); i++) {
        if (rules[i].first == query) {
            if (inferHelper(rules[i].second, visited)) {
                return true;
            }
        }
    }
    for (int i = 0; i < rules.size(); i++) {
        if (rules[i].second == query) {
            if (inferHelper(rules[i].first, visited)) {
                return true;
            }
        }
    }
    return false;
}
bool M4::infer(const string& query) {
    vector<string> visited;
    return inferHelper(query, visited);
}
void M4::printRules() {
    for (int i = 0; i < rules.size(); i++) {
        cout << rules[i].first << "  " << rules[i].second << endl;
    }
}
void M4::printFacts() {
    for (int i = 0; i < facts.size(); i++) {
        cout << facts[i] << endl;
    }
}
