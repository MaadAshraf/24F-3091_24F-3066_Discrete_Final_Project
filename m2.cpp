#include "m2.h"
void M2::generate(int index, int k, vector<string>& current, const vector<string>& students, vector<vector<string>>& result) {
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    if (index >= students.size()) {
        return;
    }

    current.push_back(students[index]);
    generate(index + 1, k, current, students, result);
    current.pop_back();

    generate(index + 1, k, current, students, result);
}
vector<vector<string>> M2::makeGroups(const vector<string>& students, int k) {
    vector<vector<string>> result;
    vector<string> current;
    generate(0, k, current, students, result);
    return result;
}
void M2::printGroups(const vector<vector<string>>& groups) {
    for (int i = 0; i < groups.size(); i++) {
        cout << "Group " << i + 1 << ": ";
        for (int j = 0; j < groups[i].size(); j++) {
            cout << groups[i][j];
            if (j != groups[i].size() - 1) cout << ", ";
        }
        cout << endl;
    }
}
