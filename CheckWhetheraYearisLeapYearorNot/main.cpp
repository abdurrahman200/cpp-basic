#include <iostream>
using namespace std;
// C++ Program to Check whether a year is Leap year or not
int main()
{
    int year ;
    cout << "Enter Any Year (XXXX) :";
    cin >> year;

    if(year % 100 == 0)
    {
        if(year % 400 == 0)
        {
            cout << year << " : Is Leap Year " << endl;
        }
    }
    else
    {
        if(year % 4 == 0)
        {
            cout << year << " : Is Leap Year" << endl;
        }
        else
        {
            cout << year << " : Not Leap Year " << endl;
        }

    }

    return 0;
}
