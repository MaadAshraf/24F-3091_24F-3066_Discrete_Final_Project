#ifndef M8_H
#define M8_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class M8 {
public:
    void addPrerequisite(const string& a, const string& b);
    bool verifyChain(const string& start, const string& end);
    vector<string> getProofSteps();
    void printProof();

private:
    vector<pair<string, string>> prereq;
    vector<string> steps;
    bool visit(const string& current, const string& end, vector<string>& visited);
};
#endif
