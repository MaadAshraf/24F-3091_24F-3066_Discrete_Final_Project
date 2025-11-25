//#include"header_m3.h"
//#include<iostream>
//#include<string>
//using namespace std;
//
//string courses[50];
//bool graphC[50][50];
//bool done[50];
//bool used[50];
//int n;
//
//void dfsCheck(int x, string need[])
//{
//    used[x] = true;
//
//    for (int j = 0; j < n; j++)
//    {
//        if (graphC[j][x] == 1)
//        {
//            if (done[j] == false)
//            {
//                need[j] = courses[j];
//            }
//
//            if (used[j] == false)
//            {
//                dfsCheck(j, need);
//            }
//        }
//    }
//}
//
//void checkprereq(int x)
//{
//    for (int i = 0; i < n; i++)
//    {
//        used[i] = false;
//    }
//
//    string need[50];
//    for (int i = 0; i < n; i++)
//    {
//        need[i] = "";
//    }
//
//    dfsCheck(x, need);
//
//    bool ok = true;
//
//    for (int i = 0; i < n; i++)
//    {
//        if (need[i] != "")
//        {
//            ok = false;
//        }
//    }
//
//    if (ok == true)
//    {
//        cout << "You can take " << courses[x] << endl;
//    }
//    else
//    {
//        cout << "You cannot take " << courses[x] << endl;
//        cout << "You must first take:" << endl;
//
//        for (int i = 0; i < n; i++)
//        {
//            if (need[i] != "")
//            {
//                cout << need[i] << endl;
//            }
//        }
//    }
//}
