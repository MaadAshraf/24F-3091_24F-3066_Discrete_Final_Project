#include "header_m7.h"
#include <iostream>
#include <string>
using namespace std;

void m7::inputdata()
{
    // Implementation placeholder
}

bool m7::isinjective(string arrA[], string arrB[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arrB[i] == arrB[j])
            {
                return false;
            }
        }
    }
    return true;
}

bool m7::issurjective(string arrA[], string arrB[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (arrB[j] == arrB[i])
            {
                found = true;
                break;
            }
        }
        if (found == false)
        {
            return false;
        }
    }
    return true;
}

bool m7::isbijective(string arrA[], string arrB[], int n)
{
    if (isinjective(arrA, arrB, n) == true && issurjective(arrA, arrB, n) == true)
    {
        return true;
    }
    return false;
}

void m7::inversemapping(string arrA[], string arrB[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arrB[i] << " -> " << arrA[i] << endl;
    }
}

void m7::composition(string arrA[], string arrB[], string arrC[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arrA[i] << " -> " << arrB[i] << " -> " << arrC[i] << endl;
    }
}

void m7::dryruncheck(string faculty[], int nCourses)
{
    bool ok = true;
    for (int i = 0; i < nCourses; i++)
    {
        int count = 0;
        for (int j = 0; j < nCourses; j++)
        {
            if (faculty[i] == faculty[j])
            {
                count++;
            }
        }
        if (count != 1)
        {
            ok = false;
        }
    }

    if (ok == true)
    {
        cout << "Dry run passed: each course has exactly one faculty" << endl;
    }
    else
    {
        cout << "Dry run FAILED: faculty assigned to multiple courses" << endl;
    }
}
