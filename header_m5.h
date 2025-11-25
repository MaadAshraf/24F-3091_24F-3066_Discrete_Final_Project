//#include<iostream>
//#include<string>
//using namespace std;
//
//void unionSets(string a[], int nA, string b[], int nB, string res[], int& nRes);
//void intersectionSets(string a[], int nA, string b[], int nB, string res[], int& nRes);
//void differenceSets(string a[], int nA, string b[], int nB, string res[], int& nRes);
//bool isSubset(string a[], int nA, string b[], int nB);
//void powerSet(string a[], int n);
//
//#include"m5.cpp"
//
//int main()
//{
//    string setA[50];
//    string setB[50];
//    string result[50];
//
//    int nA;
//    int nB;
//    int nRes = 0;
//
//    cout << "Enter number of elements in set A: ";
//    cin >> nA;
//
//    cout << "Enter elements of set A:" << endl;
//    for (int i = 0;i < nA;i++)
//    {
//        cin >> setA[i];
//    }
//
//    cout << "Enter number of elements in set B: ";
//    cin >> nB;
//
//    cout << "Enter elements of set B:" << endl;
//    for (int i = 0;i < nB;i++)
//    {
//        cin >> setB[i];
//    }
//
//    cout << "Union:" << endl;
//    unionSets(setA, nA, setB, nB, result, nRes);
//    for (int i = 0; i < nRes; i++)
//    {
//        cout << result[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Intersection:" << endl;
//    intersectionSets(setA, nA, setB, nB, result, nRes);
//    for (int i = 0; i < nRes; i++)
//    {
//        cout << result[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Difference A - B:" << endl;
//    differenceSets(setA, nA, setB, nB, result, nRes);s
//    for (int i = 0; i < nRes; i++)
//    {
//        cout << result[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Is A subset of B? ";
//    if (isSubset(setA, nA, setB, nB) == true)
//    {
//        cout << "Yes" << endl;
//    }
//    else
//    {
//        cout << "No" << endl;
//    }
//
//    cout << "Power set of A:" << endl;
//    powerSet(setA, nA);
//
//    return 0;
//}
