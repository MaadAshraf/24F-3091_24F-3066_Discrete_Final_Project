#include "m6.h"
void M6::addElement(const string& e) {
    elements.push_back(e);
}
void M6::addPair(const string& a, const string& b) {
    relation.push_back({ a, b });
}
bool M6::existsPair(const string& a, const string& b) {
    for (int i = 0; i < relation.size(); i++) {
        if (relation[i].first == a && relation[i].second == b) {
            return true;
        }
    }
    return false;
}
bool M6::isReflexive() {
    for (int i = 0; i < elements.size(); i++) {
        if (!existsPair(elements[i], elements[i])) {
            return false;
        }
    }
    return true;
}
bool M6::isSymmetric() {
    for (int i = 0; i < relation.size(); i++) {
        string a = relation[i].first;
        string b = relation[i].second;
        if (!existsPair(b, a)) {
            return false;
        }
    }
    return true;
}
bool M6::isTransitive() {
    for (int i = 0; i < relation.size(); i++) {
        for (int j = 0; j < relation.size(); j++) {
            if (relation[i].second == relation[j].first) {
                string a = relation[i].first;
                string c = relation[j].second;
                if (!existsPair(a, c)) {
                    return false;
                }
            }
        }
    }
    return true;
}
bool M6::isEquivalence() {
    return isReflexive() && isSymmetric() && isTransitive();
}
bool M6::isPartialOrder() {
    if (!isReflexive()) {
        return false;
    }
    if (!isTransitive()) {
        return false;
    }
    for (int i = 0; i < relation.size(); i++) {
        string a = relation[i].first;
        string b = relation[i].second;
        if (a != b && existsPair(b, a)) {
            return false;
        }
    }
    return true;
}
void M6::printRelation() {
    for (int i = 0; i < relation.size(); i++) {
        cout << relation[i].first << ", " << relation[i].second << endl;
    }
}
