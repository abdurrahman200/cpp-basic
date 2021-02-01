#include <iostream>

using namespace std;
// C++ Program to Find Sum and Average of three numbers
int main()
{
    int a,b,c,sum;
    float avg;

    cout << "Enter number of A Value : ";
    cin >> a;

    cout << "Enter number of B Value : ";
    cin >> b;

    cout << "Enter number of C Value : ";
    cin >> c;

    sum = a + b + c;
    cout << "Sum of 3 Number : [ " << a << " + " << b << " + " << c << " ] = " << sum << endl;

    avg = sum / 3;
    cout  << "Average of 3 number" << avg << endl;
    return 0;
}
