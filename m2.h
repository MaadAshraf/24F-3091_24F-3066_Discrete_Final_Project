#ifndef M2_H
#define M2_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class M2 {
public:
    vector<vector<string>> makeGroups(const vector<string>& students, int k);
    void printGroups(const vector<vector<string>>& groups);
private:
    void generate(int index, int k, vector<string>& current, const vector<string>& students, vector<vector<string>>& result);
};
#endif
