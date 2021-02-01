#include <iostream>
#include <math.h>
using namespace std;
//  C++ Program to find Square Root of a number using sqrt() function
int main()
{
    float sq, n;
    cout << "Enter Any Number : ";
    cin >> n;

    sq = sqrt(n);
    cout << "Square Root [" << n << "] : " << sq << endl;
    return 0;
}
