#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "header_m1.h"
#include "m2.h"
#include "header_m3.h"
#include "m4.h"
#include "header_m5.h"
#include "m6.h"
#include "header_m7.h"
#include "m8.h"
#include "header_m9.h"
#include "header_m11.h"

int main() {
    m1 m1obj;
    M2 m2;
    m3 m3obj;
    M4 m4;
    m5 m5obj;
    M6 m6;
    m7 m7obj;
    M8 m8;
    m9 m9obj;
    m11 m11obj;

    int op;

    while (true)
    {
        cout << endl;
        cout << "1. Assign Students to Lab Sessions" << endl;
        cout << "2. Logic and Inference" << endl;
        cout << "3. Relations Module" << endl;
        cout << "4. Automated Proof Verification" << endl;
        cout << "5. Course Prerequisite Check (m1)" << endl;
        cout << "6. DFS Prerequisite Check (m3)" << endl;
        cout << "7. Set Operations (m5)" << endl;
        cout << "8. Mapping & Functions (m7)" << endl;
        cout << "9. Consistency Checker (m9)" << endl;
        cout << "10. Main CLI Menu (m11)" << endl;
        cout << "11. Exit" << endl;

        cout << "Enter choice: ";
        cin >> op;

        switch (op)
        {

        case 1:
        {
            cout << "Enter students (-1 to stop)" << endl;

            while (true)
            {
                string name, course;

                cout << "Enter student name: ";
                cin >> name;

                if (name == "-1")
                
                {
                    break;
                }

                cout << "Enter course: ";
                cin >> course;

                if (course == "cs101")
                {
                    m2.laba.push_back(name);
                }
                else if (course == "cs202")
                {
                    m2.labb.push_back(name);
                }
                else if (course == "cs303")
                {
                    m2.labc.push_back(name);
                }
                else
                {
                    cout << "course not available" << endl;
                }
            }

            m2.printLabs();
            break;
        }

        case 2:
        {
            int opt;

            cout << "1. Add Rules (-1 to stop)" << endl;
            cout << "2. Add Facts (-1 to stop)" << endl;
            cout << "3. Infer Query" << endl;
            cout << "Enter option: ";
            cin >> opt;

            if (opt == 1) {
                while (true) {
                    string a, b;

                    cout << "Enter A (-1 to stop): ";
                    cin >> a;
                    if (a == "-1") break;

                    cout << "Enter B: ";
                    cin >> b;

                    m4.addRule(a, b);
                }
            }
            else if (opt == 2)
            {
                while (true)
                {
                    string f;

                    cout << "Enter fact (-1 to stop): ";
                    cin >> f;

                    if (f == "-1") 
                        break;

                    m4.addFact(f);
                }
            }
            else if (opt == 3)
            {
                string q;

                cout << "Enter query: ";
                cin >> q;

                if (m4.infer(q))
                {
                    cout << "True" << endl;
                }
                else 
                {
                    cout << "False" << endl;
                }
            }

            break;
        }

        case 3: {
            int opt;

            cout << "1. Add Elements (-1 to stop)" << endl;
            cout << "2. Add Pairs (-1 to stop)" << endl;
            cout << "3. Check Reflexive" << endl;
            cout << "4. Check Symmetric" << endl;
            cout << "5. Check Transitive" << endl;
            cout << "6. Check Equivalence" << endl;
            cout << "7. Check Partial Order" << endl;

            cout << "Enter option: ";
            cin >> opt;

            if (opt == 1) 
            {
                while (true) 
                {
                    string e;

                    cout << "Enter element (-1 to stop): ";
                    cin >> e;

                    if (e == "-1")
                        break;

                    m6.addElement(e);
                }
            }
            else if (opt == 2)
            {
                while (true)
                {
                    string a, b;

                    cout << "Enter A (-1 to stop): ";
                    cin >> a;
                    if (a == "-1")
                        break;

                    cout << "Enter B: ";
                    cin >> b;

                    m6.addPair(a, b);
                }
            }
            else if (opt == 3)
            {
                cout << (m6.isReflexive() ? "Yes" : "No") << endl;
            }
            else if (opt == 4) 
            {
                cout << (m6.isSymmetric() ? "Yes" : "No") << endl;
            }
            else if (opt == 5)
            {
                cout << (m6.isTransitive() ? "Yes" : "No") << endl;
            }
            else if (opt == 6) 
            {
                cout << (m6.isEquivalence() ? "Yes" : "No") << endl;
            }
            else if (opt == 7) 
            {
                cout << (m6.isPartialOrder() ? "Yes" : "No") << endl;
            }

            break;
        }

        case 4:
         {
            cout << "Add prerequisites (-1 to stop)" << endl;

            while (true) 
            {
                string a, b;

                cout << "Enter A (-1 to stop): ";
                cin >> a;
                if (a == "-1")
                    break;

                cout << "Enter B: ";
                cin >> b;

                m8.addPrerequisite(a, b);
            }

            string s, e;

            cout << "Enter start course: ";
            cin >> s;

            cout << "Enter end course: ";
            cin >> e;

            bool ok = m8.verifyChain(s, e);

            cout << (ok ? "Valid chain" : "Invalid chain") << endl;

            m8.printProof();
            break;
        }

        case 5: {
            m1obj.coursepreqs();
            break;
        }

        case 6: {
            int idx;

            cout << "Enter course index to check: ";
            cin >> idx;

            m3obj.checkprereq(idx);
            break;
        }

        case 7: {
            int setop;
            cout << "Set Operations: 1-Union 2-Intersection 3-Difference 4-Subset 5-PowerSet" << endl;
            cin >> setop;

            string a[50], b[50], res[100];
            int nA, nB, nRes;

            if (setop == 1) {
                cout << "Enter size of set A: ";
                cin >> nA;
                for (int i = 0; i < nA; i++) cin >> a[i];

                cout << "Enter size of set B: ";
                cin >> nB;
                for (int i = 0; i < nB; i++)
                {
                    cin >> b[i];
                }

                m5obj.unionsets(a, nA, b, nB, res, nRes);

                cout << "Union: ";
                for (int i = 0; i < nRes; i++)
                {
                    cout << res[i] << " ";
                    cout << endl;
                }
            }
            else if (setop == 2)
            {
                cout << "Enter size of set A: ";
                cin >> nA;
                for (int i = 0; i < nA; i++)
                {
                    cin >> a[i];
                }

                cout << "Enter size of set B: ";
                cin >> nB;
                for (int i = 0; i < nB; i++)
                {
                    cin >> b[i];
                }

                m5obj.intersectionsets(a, nA, b, nB, res, nRes);

                cout << "Intersection: ";
                for (int i = 0; i < nRes; i++)
                {
                    cout << res[i] << " ";
                    cout << endl;
                }
            }
            else if (setop == 3) 
            {
                cout << "Enter size of set A: ";
                cin >> nA;
                for (int i = 0; i < nA; i++)
                {
                    cin >> a[i];
                }

                cout << "Enter size of set B: ";
                cin >> nB;
                for (int i = 0; i < nB; i++)
                {
                    cin >> b[i];
                }

                m5obj.differencesets(a, nA, b, nB, res, nRes);

                cout << "Difference: ";
                for (int i = 0; i < nRes; i++)
                {
                    cout << res[i] << " ";
                    cout << endl;
                }
            }
            else if (setop == 4) {
                cout << "Enter size of set A: ";
                cin >> nA;
                for (int i = 0; i < nA; i++)
                {
                    cin >> a[i];
                }

                cout << "Enter size of set B: ";
                cin >> nB;
                for (int i = 0; i < nB; i++)
                {
                    cin >> b[i];
                }

                bool ok = m5obj.issubset(a, nA, b, nB);
                cout << (ok ? "A is subset of B" : "A is not subset of B") << endl;
            }
            else if (setop == 5) {
                cout << "Enter size of set A: ";
                cin >> nA;
                for (int i = 0; i < nA; i++)
                {
                    cin >> a[i];
                }

                m5obj.powerset(a, nA);
            }

            break;
        }

        case 8:
        {
            cout << "Mapping & Functions module called (implement as needed)." << endl;
            break;
        }

        case 9:
        {
            m9obj.consistencychecker();
            break;
        }

        case 10: 
        {
            m11obj.menu();
            break;
        }

        case 11:
            return 0;

        default:
            cout << "Invalid choice" << endl;
        }
    }
}
