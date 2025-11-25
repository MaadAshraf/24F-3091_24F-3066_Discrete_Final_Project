#include "m8.h"
void M8::addPrerequisite(const string& a, const string& b) {
    prereq.push_back({ a, b });
}
bool M8::visit(const string& current, const string& end, vector<string>& visited) {
    for (int i = 0; i < visited.size(); i++) {
        if (visited[i] == current) {
            return false;
        }
    }
    visited.push_back(current);
    if (current == end) {
        steps.push_back(current + " reached");
        return true;
    }
    for (int i = 0; i < prereq.size(); i++) {
        if (prereq[i].first == current) {
            steps.push_back("From " + current + " go to " + prereq[i].second);
            if (visit(prereq[i].second, end, visited)) {
                return true;
            }
        }
    }
    return false;
}
bool M8::verifyChain(const string& start, const string& end) {
    steps.clear();
    vector<string> visited;
    steps.push_back("Start at " + start);
    bool ok = visit(start, end, visited);
    if (!ok) {
        steps.push_back("Chain invalid");
    }
    return ok;
}
vector<string> M8::getProofSteps() {
    return steps;
}
void M8::printProof() {
    for (int i = 0; i < steps.size(); i++) {
        cout << steps[i] << endl;
    }
}
