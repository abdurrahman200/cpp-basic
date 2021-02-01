#include <iostream>
using namespace std;
// C++ Program to Find whether given Number is Odd or Even
int main()
{
    int n ;

    cout << "Enter Any Number : ";
    cin >> n;

    if(n % 2 == 0)
    {
        cout << "EVEN Number : [" << n << "] " << endl;
    }
    else
    {
        cout << "ODD Number : [" << n << "] " << endl;
    }
    return 0;
}
