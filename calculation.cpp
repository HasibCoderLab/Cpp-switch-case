// ================================================
//               Language: C++ / Cpp
//               Topic   : [Switch-Case//
//               Problem : 👉👉The calculator should input two numbers and an operator from user.
//
//               Want    :  Ques: Write a program to create a calculator th performs basic arithmetic
//                          operations (add, subtract, multiply and divide) using switch case
//                          The calculator should input two numbers and an operator from user.

//
// ================================================
#include <iostream>
using namespace std;
int main()
{
    int n1 , n2;
    char op;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    cout << "Enter operator (+, -, *, /): ";
    cin>>op;
    switch (op)
    {

    case '+':
        cout << "Result =  " << n1 + n2 ;
         break;
    case '-':
        cout << "Result  = " << n1 - n2 ;
        break;

    case '*':
        cout << "Result  = " << n1 * n2 ;
        break;
    case '/':
        cout << "Result  = " << n1 / n2;
         break;
    }
    return 0;
}
