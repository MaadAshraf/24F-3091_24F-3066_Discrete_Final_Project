#include "header_m9.h"
#include <iostream>
#include <string>
using namespace std;

void m9::checkconflicts(string students[], int nStudents, string courses[], int nCourses, int enroll[][50], int nEnroll[], int graph[][50])
{
    for (int i = 0; i < nStudents; i++)
    {
        for (int j = 0; j < nEnroll[i]; j++)
        {
            for (int k = j + 1; k < nEnroll[i]; k++)
            {
                if (enroll[i][j] == enroll[i][k])
                {
                    cout << "Conflict: " << students[i] << " enrolled twice in " << courses[enroll[i][j]] << endl;
                }
            }
        }
    }

    for (int i = 0; i < nStudents; i++)
    {
        for (int j = 0; j < nEnroll[i]; j++)
        {
            int courseIdx = enroll[i][j];

            for (int pre = 0; pre < nCourses; pre++)
            {
                if (graph[pre][courseIdx] == 1)
                {
                    bool completed = false;

                    for (int k = 0; k < nEnroll[i]; k++)
                    {
                        if (enroll[i][k] == pre)
                        {
                            completed = true;
                            break;
                        }
                    }

                    if (completed == false)
                    {
                        cout << "Missing prerequisite: " << students[i] << " must take " << courses[pre] << " before " << courses[courseIdx] << endl;
                    }
                }
            }
        }
    }

    for (int i = 0; i < nStudents; i++)
    {
        if (nEnroll[i] > 3)
        {
            cout << "Overload: " << students[i] << " enrolled in " << nEnroll[i] << " courses." << endl;
        }
    }
}

void m9::consistencychecker()
{
    int nCourses, nStudents;
    string courses[50], students[50];
    int enroll[50][50], nEnroll[50], graph[50][50];

    cout << "Enter number of courses: ";
    cin >> nCourses;

    for (int i = 0; i < nCourses; i++)
    {
        cout << "Enter course " << i << " name: ";
        cin >> courses[i];
    }

    cout << "Enter number of students: ";
    cin >> nStudents;

    for (int i = 0; i < nStudents; i++)
    {
        cout << "Enter student " << i + 1 << " name: ";
        cin >> students[i];

        cout << "Enter number of courses student is taking: ";
        cin >> nEnroll[i];

        for (int j = 0; j < nEnroll[i]; j++)
        {
            cout << "Enter course index for course " << j + 1 << " (0 to " << nCourses - 1 << "): ";
            cin >> enroll[i][j];
        }
    }

    for (int i = 0; i < nCourses; i++)
    {
        for (int j = 0; j < nCourses; j++)
        {
            graph[i][j] = 0;
        }
    }

    int p;
    cout << "Enter number of prerequisite relations: ";
    cin >> p;

    cout << "Enter in format (A B) meaning course index A must be before B" << endl;

    for (int i = 0; i < p; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
    }

    checkconflicts(students, nStudents, courses, nCourses, enroll, nEnroll, graph);
}
