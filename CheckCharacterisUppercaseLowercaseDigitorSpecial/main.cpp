#include <iostream>
using namespace std;
// C++ Program to Check Character is Uppercase, Lowercase, Digit or Special
int main()
{
    char ch ;

    cout << "Enter Any Character To Check : ";
    cin >> ch;

    if(ch >= 65 && ch <= 90 )
    {
        cout << "Character Is [" << ch << "] : Uppercase Character" << endl;
    }
    else if(ch >= 48 && ch <= 57 )
    {
        cout << "Character Is [" << ch << "] : Digit  Character" << endl;
    }
    else if(ch >= 97 && ch <= 122 )
    {
        cout << "Character Is [" << ch << "] : Lowercase Character" << endl;
    }
    else
    {
        cout << "Character Is [" << ch << "] : Special Character "<< endl;
    }

    return 0;
}
