#ifndef header_m9_h
#define header_m9_h

#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

string students[MAX];
string courses[MAX];
int nStudents;
int nCourses;
int enroll[MAX][MAX];
int nEnroll[MAX];
int graph[MAX][MAX];

class m9
{
public:
    void checkconflicts(string students[], int nStudents, string courses[], int nCourses, int enroll[][MAX], int nEnroll[], int graph[][MAX]);
    void consistencychecker();
};

#endif
