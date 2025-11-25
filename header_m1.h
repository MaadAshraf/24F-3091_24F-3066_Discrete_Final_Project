#ifndef header_m1_h
#define header_m1_h

#include<iostream>
#include<string>
using namespace std;

class m1
{
public:
    string clist[100];
    int graph[100][100];
    int n;

    void coursepreqs();
};

#endif
