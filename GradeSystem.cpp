// ================================================
//               Language: C++ / Cpp
//               Topic   : [Switch-Case//
//               Problem : 👉👉[2]
//               Want    :  Grade System
//
// ================================================
#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter grade (A, B, C, F): ";
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "Excellent";
        break;

    case 'B':
        cout << "Good";
        break;
    case'C':
    cout<< "Average";
    break;
    case 'D' :
    cout<<"Fail";
    break;
    default :
    cout <<"Invalid !" ;
    }
    return 0;
}