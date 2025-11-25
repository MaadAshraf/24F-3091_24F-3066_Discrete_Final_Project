#include "header_m5.h"
#include<iostream>
#include<string>
using namespace std;

void m5::unionsets(string a[], int nA, string b[], int nB, string res[], int& nRes)
{
    nRes = 0;
    for (int i = 0; i < nA; i++)
    {
        res[nRes++] = a[i];
    }
    for (int i = 0; i < nB; i++)
    {
        bool found = false;
        for (int j = 0; j < nA; j++)
        {
            if (b[i] == a[j])
            {
                found = true;
            }
        }
        if (found == false)
        {
            res[nRes++] = b[i];
        }
    }
}

void m5::intersectionsets(string a[], int nA, string b[], int nB, string res[], int& nRes)
{
    nRes = 0;
    for (int i = 0; i < nA; i++)
    {
        for (int j = 0; j < nB; j++)
        {
            if (a[i] == b[j])
            {
                res[nRes++] = a[i];
            }
        }
    }
}

void m5::differencesets(string a[], int nA, string b[], int nB, string res[], int& nRes)
{
    nRes = 0;
    for (int i = 0; i < nA; i++)
    {
        bool found = false;
        for (int j = 0; j < nB; j++)
        {
            if (a[i] == b[j])
            {
                found = true;
            }
        }
        if (found == false)
        {
            res[nRes++] = a[i];
        }
    }
}

bool m5::issubset(string a[], int nA, string b[], int nB)
{
    for (int i = 0; i < nA; i++)
    {
        bool found = false;
        for (int j = 0; j < nB; j++)
        {
            if (a[i] == b[j])
            {
                found = true;
            }
        }
        if (found == false)
        {
            return false;
        }
    }
    return true;
}

void m5::powerset(string a[], int n)
{
    int total = 1 << n;
    for (int i = 0; i < total; i++)
    {
        cout << "{ ";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << a[j] << " ";
            }
        }
        cout << "}" << endl;
    }
}
