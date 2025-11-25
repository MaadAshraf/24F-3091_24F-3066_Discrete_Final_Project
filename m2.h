#ifndef M2_H
#define M2_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class M2 {
public:
    void addStudentToLab(const string& name, const string& course);
    void printLabs();
    vector<string> laba;
    vector<string> labb;
    vector<string> labc;
};
#endif
