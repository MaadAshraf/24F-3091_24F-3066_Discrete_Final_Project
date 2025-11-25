////void inputData()
//{
//    cout << "Enter number of students: ";
//    cin >> nStudents;
//
//    for (int i = 0;i < nStudents;i++)
//    {
//        cout << "Enter student " << i + 1 << ": ";
//        cin >> students[i];
//    }
//
//    cout << "Enter number of courses: ";
//    cin >> nCourses;
//
//    for (int i = 0;i < nCourses;i++)
//    {
//        cout << "Enter course " << i + 1 << ": ";
//        cin >> courses[i];
//    }
//
//    cout << "Enter faculty assigned to each course:" << endl;
//    for (int i = 0;i < nCourses;i++)
//    {
//        cout << "Faculty for course " << courses[i] << ": ";
//        cin >> faculty[i];
//    }
//
//    cout << "Enter room assigned to each faculty:" << endl;
//    for (int i = 0;i < nCourses;i++)
//    {
//        cout << "Room for faculty " << faculty[i] << ": ";
//        cin >> rooms[i];
//    }
//}
//
//bool isInjective(string arrA[], string arrB[], int n)
//{
//    for (int i = 0;i < n;i++)
//    {
//        for (int j = i + 1;j < n;j++)
//        {
//            if (arrB[i] == arrB[j])
//            {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//bool isSurjective(string arrA[], string arrB[], int n)
//{
//    for (int i = 0;i < n;i++)
//    {
//        bool found = false;
//        for (int j = 0;j < n;j++)
//        {
//            if (arrB[j] == arrB[i])
//            {
//                found = true;
//                break;
//            }
//        }
//        if (found == false)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//bool isBijective(string arrA[], string arrB[], int n)
//{
//    if (isInjective(arrA, arrB, n) == true && isSurjective(arrA, arrB, n) == true)
//    {
//        return true;
//    }
//    return false;
//}
//
//void inverseMapping(string arrA[], string arrB[], int n)
//{
//    for (int i = 0;i < n;i++)
//    {
//        cout << arrB[i] << " -> " << arrA[i] << endl;
//    }
//}
//
//void composition(string arrA[], string arrB[], string arrC[], int n)
//{
//    for (int i = 0;i < n;i++)
//    {
//        cout << arrA[i] << " -> " << arrB[i] << " -> " << arrC[i] << endl;
//    }
//}
//
//void dryRunCheck()
//{
//    bool ok = true;
//    for (int i = 0;i < nCourses;i++)
//    {
//        int count = 0;
//        for (int j = 0;j < nCourses;j++)
//        {
//            if (faculty[i] == faculty[j])
//            {
//                count++;
//            }
//        }
//        if (count != 1)
//        {
//            ok = false;
//        }
//    }
//
//    if (ok == true)
//    {
//        cout << "Dry run passed: each course has exactly one faculty" << endl;
//    }
//    else
//    {
//        cout << "Dry run FAILED: faculty assigned to multiple courses" << endl;
//    }
//}
