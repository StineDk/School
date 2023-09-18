// Console Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "calculator.h"
using namespace std;
int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Lommeregner." << endl << endl;
    cout << "Skriv din ligning. Opstilling: a+b, a-b, a*b, a/b \n"; 

    calculator C;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Pr\x9Bved og dividere med 0." << endl << endl;
            continue;
        }
        else
        {
            result = C.Calculate(x, oper, y);
        }
        cout << "Result of " << x << oper << y << " is: " << result << endl;
    }
    return 0;
    }