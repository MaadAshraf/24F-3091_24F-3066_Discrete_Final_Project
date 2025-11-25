////string students[50];
//string courses[50];
//int graphM[50][50];
//int nStudents = 0;
//int nCourses = 0;
//
//void menu()
//{
//    int choice = 0;
//
//    while (true)
//    {
//        cout << "\n====== FAST University CLI ======" << endl;
//        cout << "1. Add Students" << endl;
//        cout << "2. Add Courses" << endl;
//        cout << "3. Add Prerequisite Rules" << endl;
//        cout << "4. Run Course Prerequisite Check" << endl;
//        cout << "5. Run Set Operations Module" << endl;
//        cout << "6. Run Consistency Checker" << endl;
//        cout << "7. Exit" << endl;
//
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (choice == 1)
//        {
//            int n;
//            cout << "Enter number of students to add: ";
//            cin >> n;
//
//            for (int i = 0; i < n; i++)
//            {
//                cout << "Enter student " << nStudents + 1 << " name: ";
//                cin >> students[nStudents];
//                nStudents++;
//            }
//        }
//        else if (choice == 2)
//        {
//            int n;
//            cout << "Enter number of courses to add: ";
//            cin >> n;
//
//            for (int i = 0; i < n; i++)
//            {
//                cout << "Enter course " << nCourses + 1 << " name: ";
//                cin >> courses[nCourses];
//                nCourses++;
//            }
//
//            for (int i = 0; i < nCourses; i++)
//            {
//                for (int j = 0; j < nCourses; j++)
//                {
//                    graphM[i][j] = 0;
//                }
//            }
//        }
//        else if (choice == 3)
//        {
//            int p;
//            cout << "Enter number of prerequisite rules: ";
//            cin >> p;
//
//            cout << "Enter (A B) meaning A must be before B (course indices 0 to " << nCourses - 1 << "):" << endl;
//
//            for (int i = 0; i < p; i++)
//            {
//                int a, b;
//                cin >> a >> b;
//
//                if (a >= 0 && a < nCourses && b >= 0 && b < nCourses)
//                {
//                    graphM[a][b] = 1;
//                }
//                else
//                {
//                    cout << "Invalid course index!" << endl;
//                }
//            }
//        }
//        else if (choice == 4)
//        {
//            coursepreqs();
//        }
//        else if (choice == 5)
//        {
//            setsModule();
//        }
//        else if (choice == 6)
//        {
//            consistencyChecker();
//        }
//        else if (choice == 7)
//        {
//            cout << "Exiting CLI..." << endl;
//            break;
//        }
//        else
//        {
//            cout << "Invalid choice! Try again." << endl;
//        }
//    }
//}
