#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
// Write a C++ Program to Calculate Compound Interest
// A = P (1 + r/n) (nt)
//A = the future value of the investment/loan, including interest
//P = the principal investment amount (the initial deposit or loan amount)
//r = the annual interest rate (decimal)
//n = the number of times that interest is compounded per year
//t = the number of years the money is invested or borrowed for
int main()
{
    float principal,rate, time, ci;

    cout << "Enter principal (Amount) : ";
    cin >> principal;

    cout << "Enter Rate of Interest : ";
    cin >> rate;

    cout << "Enter Time Period : ";
    cin >> time;

    ci = principal * pow( (1 + rate / 100), time );

    cout << "Compound Interest Is :  " << ci << endl;

    return 0;
}
