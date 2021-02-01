#include <iostream>
// C++ program to Find Cube of Number using MACROS
using namespace std;
#define CUBE(x) (x * x * x)
int main()
{
    int n , cube;

    cout << "Enter any positive number : ";
    cin >> n;

    cube  = CUBE(n);
    cout << "Result Is : [" << n << "] : " << cube << endl;
    return 0;
}
