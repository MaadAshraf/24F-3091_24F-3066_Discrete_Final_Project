//#include"header_m1.h"
//#include<iostream>
//#include<string>
//using namespace std;
//string clist[100];
//int graph[100][100];
//int n;
//
//void coursepreqs()
//{
//    cout << "Enter number of courses : ";
//    cin >> n;
//    int c = 0;
//    for (int i = 0; i < n; i++)
//    {
//        
//        cout << "Enter course " << c + 1 << " : ";
//        getline(cin, clist[i]);
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            graph[i][j] = 0;
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        int p;
//        cout << "Enter number of prerequisites for course " << clist[i] << " : ";
//        cin >> p;
//
//        if (p > 0)
//        {
//            cout << "Enter " << p << " prerequisite courses for " << clist[i] << " :" << endl;
//
//            for (int j = 0; j < p; j++)
//            {
//                string pre;
//                cin >> pre;
//
//                int u = -1;
//
//                for (int k = 0; k < n; k++)
//                {
//                    if (clist[k] == pre)
//                    {
//                        u = k;
//                        break;
//                    }
//                }
//
//                if (u != -1)
//                {
//                    graph[u][i] = 1; 
//                }
//                else
//                {
//                    cout << "Course " << pre << " not found!" << endl;
//                }
//            }
//        }
//    }
//}
