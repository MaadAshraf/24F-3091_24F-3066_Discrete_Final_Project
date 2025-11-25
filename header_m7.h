//#include<iostream>
//#include<string>
//using namespace std;
//
//string students[50];
//string courses[50];
//string faculty[50];
//string rooms[50];
//
//int nStudents;
//int nCourses;
//
//void inputData();
//bool isInjective(string arrA[], string arrB[], int n);
//bool isSurjective(string arrA[], string arrB[], int n);
//bool isBijective(string arrA[], string arrB[], int n);
//void inverseMapping(string arrA[], string arrB[], int n);
//void composition(string arrA[], string arrB[], string arrC[], int n);
//void dryRunCheck();
//
//#include"m7.cpp"
//
//int main()
//{
//    inputData();
//
//    cout << "Checking Injectivity (Course -> Faculty):" << endl;
//    if (isInjective(courses, faculty, nCourses) == true)
//    {
//        cout << "Injective" << endl;
//    }
//    else
//    {
//        cout << "Not Injective" << endl;
//    }
//
//    cout << "Checking Surjectivity (Course -> Faculty):" << endl;
//    if (isSurjective(courses, faculty, nCourses) == true)
//    {
//        cout << "Surjective" << endl;
//    }
//    else
//    {
//        cout << "Not Surjective" << endl;
//    }
//
//    cout << "Checking Bijectivity (Course -> Faculty):" << endl;
//    if (isBijective(courses, faculty, nCourses) == true)
//    {
//        cout << "Bijective" << endl;
//    }
//    else
//    {
//        cout << "Not Bijective" << endl;
//    }
//
//    cout << "Inverse Mapping (Faculty -> Course):" << endl;
//    inverseMapping(courses, faculty, nCourses);
//
//    cout << "Composition: Student -> Course -> Faculty" << endl;
//    composition(students, courses, faculty, nStudents);
//
//    cout << "Dry Run Check (Every course has exactly one faculty):" << endl;
//    dryRunCheck();
//
//    return 0;
//}
