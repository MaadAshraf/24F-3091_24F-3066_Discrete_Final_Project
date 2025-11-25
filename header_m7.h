#ifndef header_m7_h
#define header_m7_h

#include<iostream>
#include<string>
using namespace std;

class m7
{
public:
    void inputdata();
    bool isinjective(string arrA[], string arrB[], int n);
    bool issurjective(string arrA[], string arrB[], int n);
    bool isbijective(string arrA[], string arrB[], int n);
    void inversemapping(string arrA[], string arrB[], int n);
    void composition(string arrA[], string arrB[], string arrC[], int n);
    void dryruncheck(string faculty[], int nCourses);
};

#endif
