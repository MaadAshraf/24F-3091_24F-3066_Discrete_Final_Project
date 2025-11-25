#ifndef header_m5_h
#define header_m5_h

#include<iostream>
#include<string>
using namespace std;

class m5
{
public:
    void unionsets(string a[], int nA, string b[], int nB, string res[], int& nRes);
    void intersectionsets(string a[], int nA, string b[], int nB, string res[], int& nRes);
    void differencesets(string a[], int nA, string b[], int nB, string res[], int& nRes);
    bool issubset(string a[], int nA, string b[], int nB);
    void powerset(string a[], int n);
};

#endif
