#include <iostream>

using namespace std;
// Write a C++ Program to Display ASCII Value of a Character
int main()
{
    char c;
    while(1)
    {
        cout << "Enter Any Character : ";
        cin >> c;
        cout << "The ANCII Value Of Character : [ " << c << " ] is : " << int(c) << endl;
        cout << endl;
    }

    return 0;
}
