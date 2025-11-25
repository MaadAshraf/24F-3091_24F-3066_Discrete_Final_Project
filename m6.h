#ifndef M6_H
#define M6_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class M6 {
public:
    void addElement(const string& e);
    void addPair(const string& a, const string& b);
    bool isReflexive();
    bool isSymmetric();
    bool isTransitive();
    bool isEquivalence();
    bool isPartialOrder();
    void printRelation();
private:
    vector<string> elements;
    vector<pair<string, string>> relation;
    bool existsPair(const string& a, const string& b);
};
#endif
