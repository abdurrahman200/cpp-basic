#include <iostream>
// C++ Program to Find Quotient and Remainder of 2 numbers
using namespace std;

int main()
{
    int divisor, dividend,quotient, remainder;

    cout << "Enter Divisor : ";
    cin >> divisor;
    cout << "Enter Dividend : ";
    cin >> dividend;

    quotient = dividend / divisor ;
    remainder = dividend % divisor ;

    cout << " Quotient : " << quotient << endl;
    cout << " Remainder : " << remainder << endl;
    return 0;
}
