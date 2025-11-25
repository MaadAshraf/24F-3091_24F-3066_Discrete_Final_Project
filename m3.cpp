#include "header_m3.h"
#include<iostream>
#include<string>
using namespace std;

void m3::setcourses(int num, string arr[])
{
    n = num;
    for (int i = 0; i < n; i++)
    {
        courses[i] = arr[i];
    }
}

void m3::setgraph(bool g[50][50])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graphC[i][j] = g[i][j];
        }
    }
}

void m3::setdone(bool d[50])
{
    for (int i = 0; i < n; i++)
    {
        done[i] = d[i];
    }
}

void m3::dfscheck(int x, string need[])
{
    used[x] = true;

    for (int j = 0; j < n; j++)
    {
        if (graphC[j][x] == 1)
        {
            if (done[j] == false)
            {
                need[j] = courses[j];
            }

            if (used[j] == false)
            {
                dfscheck(j, need);
            }
        }
    }
}

void m3::checkprereq(int x)
{
    for (int i = 0; i < n; i++)
    {
        used[i] = false;
    }

    string need[50];
    for (int i = 0; i < n; i++)
    {
        need[i] = "";
    }

    dfscheck(x, need);

    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        if (need[i] != "")
        {
            ok = false;
        }
    }

    if (ok == true)
    {
        cout << "You can take " << courses[x] << endl;
    }
    else
    {
        cout << "You cannot take " << courses[x] << endl;
        cout << "You must first take:" << endl;

        for (int i = 0; i < n; i++)
        {
            if (need[i] != "")
            {
                cout << need[i] << endl;
            }
        }
    }
}
