#include "m2.h"
void M2::addStudentToLab(const string& name, const string& course) {
    if (course == "cs101") {
        laba.push_back(name);
    }
    else if (course == "cs202") {
        labb.push_back(name);
    }
    else if (course == "cs303") {
        labc.push_back(name);
    }
    else {
        cout << "course not available" << endl;
    }
}
void M2::printLabs() {
    cout << "Lab A (cs101): ";
    for (int i = 0; i < laba.size(); i++) {
        cout << laba[i] << " ";
    }
    cout << endl;
    cout << "Lab B (cs202): ";
    for (int i = 0; i < labb.size(); i++) {
        cout << labb[i] << " ";
    }
    cout << endl;
    cout << "Lab C (cs303): ";
    for (int i = 0; i < labc.size(); i++) {
        cout << labc[i] << " ";
    }
    cout << endl;
}
