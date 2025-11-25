#ifndef M4_H
#define M4_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class M4 {
public:
    void addRule(const string& a, const string& b);
    void addFact(const string& fact);
    bool infer(const string& query);
    void printRules();
    void printFacts();
private:
    vector<pair<string, string>> rules;
    vector<string> facts;
    bool inferHelper(const string& query, vector<string>& visited);
};
#endif
