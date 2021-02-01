#include <iostream>

using namespace std;
// Write a C++ Program to Calculate Multiplication of two Numbers
int main()
{
    double n1, n2, product;

    cout << "Enter 1st Number : ";
    cin >> n1;
    cout << "Enter 2st Number : ";
    cin >> n2;

    product = n1 * n2;

    cout << " Product Of Two Number :: [ " << n1 << " * " << n2 << " ] : " << product << endl;
    return 0;
}
