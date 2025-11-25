#include "header_m1.h"
#include "header_m3.h"
#include "header_m5.h"
#include "header_m7.h"
#include "header_m9.h"
#include <iostream>
#include <string>
using namespace std;

void m11::menu()
{
    m1 m1obj;
    m3 m3obj;
    m5 m5obj;
    m7 m7obj;
    m9 m9obj;

    string students[50];
    string courses[50];
    int graphM[50][50];
    int nStudents = 0;
    int nCourses = 0;

    int choice = 0;

    while (true)
    {
        cout << "\n====== FAST University CLI ======" << endl;
        cout << "1. Add Students" << endl;
        cout << "2. Add Courses" << endl;
        cout << "3. Add Prerequisite Rules" << endl;
        cout << "4. Run Course Prerequisite Check" << endl;
        cout << "5. Run Set Operations Module" << endl;
        cout << "6. Run Consistency Checker" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int n;
            cout << "Enter number of students to add: ";
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                cout << "Enter student " << nStudents + 1 << " name: ";
                cin >> students[nStudents];
                nStudents++;
            }
        }
        else if (choice == 2)
        {
            int n;
            cout << "Enter number of courses to add: ";
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                cout << "Enter course " << nCourses + 1 << " name: ";
                cin >> courses[nCourses];
                nCourses++;
            }

            for (int i = 0; i < nCourses; i++)
            {
                for (int j = 0; j < nCourses; j++)
                {
                    graphM[i][j] = 0;
                }
            }
        }
        else if (choice == 3)
        {
            int p;
            cout << "Enter number of prerequisite rules: ";
            cin >> p;

            cout << "Enter (A B) meaning A must be before B (course indices 0 to " << nCourses - 1 << "):" << endl;

            for (int i = 0; i < p; i++)
            {
                int a, b;
                cin >> a >> b;

                if (a >= 0 && a < nCourses && b >= 0 && b < nCourses)
                {
                    graphM[a][b] = 1;
                }
                else
                {
                    cout << "Invalid course index!" << endl;
                }
            }
        }
        else if (choice == 4)
        {
            // Example: call m1's coursepreqs (you may need to pass data)
            m1obj.coursepreqs();
        }
        else if (choice == 5)
        {
            // Example: call m5's set operations (you may need to pass data)
            // m5obj.unionsets(...);
            // m5obj.intersectionsets(...);
            // m5obj.differencesets(...);
            // m5obj.issubset(...);
            // m5obj.powerset(...);
            cout << "Set operations module called (implement as needed)." << endl;
        }
        else if (choice == 6)
        {
            // Example: call m9's consistency checker
            m9obj.consistencychecker();
        }
        else if (choice == 7)
        {
            cout << "Exiting CLI..." << endl;
            break;
        }
        else
        {
            cout << "Invalid choice! Try again." << endl;
        }
    }
}
