//#ifndef header_m3_h
//#define header_m3_h
//
//#include<iostream>
//#include<string>
//using namespace std;
//void dfsCheck(int x, string need[]);
//void checkprereq(int x);
//
//#include "m3.cpp" 
//
//int main()
//{
//    cout << "Enter number of courses : ";
//    cin >> n;
//
//    cin.ignore();
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Enter course " << i + 1 << " : ";
//        getline(cin, courses[i]);
//    }
//
//    cout << "Enter prerequisite matrix (0 or 1):" << endl;
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> graphC[i][j];
//        }
//    }
//
//    cout << "Enter completed status for each course (0/1):" << endl;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> done[i];
//    }
//
//    while (true)
//    {
//        int x;
//        cout << "\nEnter course index to check (-1 to exit): ";
//        cin >> x;
//
//        if (x == -1)
//        {
//            break;
//        }
//
//        if (x >= 0 && x < n)
//        {
//            checkPrereq(x);
//        }
//    }
//
//    return 0;
//}
//
//#endif
