#ifndef header_m3_h
#define header_m3_h

#include<iostream>
#include<string>
using namespace std;

class m3
{
public:
    string courses[50];
    bool graphC[50][50];
    bool done[50];
    bool used[50];
    int n;

    void setcourses(int num, string arr[]);
    void setgraph(bool g[50][50]);
    void setdone(bool d[50]);
    void dfscheck(int x, string need[]);
    void checkprereq(int x);
};

#endif
