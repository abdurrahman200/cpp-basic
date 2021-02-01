#include <iostream>
#include<math.h>   //for pow() function
using namespace std;
// Write a C++ Program to raise any number X to power N
int main()
{
    int x,n, result;
    cout << "Enter Value Of X :";
    cin >> x;
    cout << "Enter Value Of N :";
    cin >> n;

    result = pow(x,n);

    cout << " The Power Of Number [ " << x << " ^ " << n << " ] = " << result <<endl;
    return 0;
}
