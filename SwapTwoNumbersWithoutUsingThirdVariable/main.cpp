#include <iostream>
using namespace std;
// C++ Program to Swap Two Numbers without using third variable
int main()
{
    int a = 2 , b = 1 ;

//    cout << "Enter  1st Number";
//    cin >> a;
//    cout << "Enter  1st Number";
//    cin >> b;

    cout << "Before Swapping,Number are :: " << endl;
    cout << " a: " << a << ", b : " << b << endl;

    a = a + b; // a = 2 + 1 = 3
    b = a - b; // b = 2 - 1 = 1
    a = a - b; // a = 3 - 1 = 2

    cout << "After Swapping,Number are :: " << endl;
    cout << " a: " << a << ", b : " << b << endl;

    return 0;
}
