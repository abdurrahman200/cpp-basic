#include <iostream>
#include <cmath>
using namespace std;
// C++ Program to Find Roots of Quadratic Equation using if else
int main()
{
    float a,b, c, x1, x2, determinant,realPart, imaginaryPart ;
    cout << " Enter Coefficient a : ";
    cin >> a;
    cout << " Enter Coefficient b : ";
    cin >> b;
    cout << " Enter Coefficient c : ";
    cin >> c;

    determinant =  b * b - 4 * a * c;

    if(determinant >  0)
    {
        x1 = ( -b + sqrt(determinant) ) / (2 * a);
        x2 = ( -b - sqrt(determinant) ) / (2 * a);
        cout << "Roots Are Real And Different " << endl;
        cout << "  x1 " << x1 << endl;
        cout << "  x2 " << x2 << endl;
    }
    else if( determinant == 0 )
    {
        cout << " Roots Are Real And Some " << endl;
        x1 = ( -b + sqrt (determinant) ) / ( 2 * a);
        cout << " x1 = x2 " << x1 << endl;
    }
    else
    {
        realPart = -  b/ ( 2 * a );
        imaginaryPart = sqrt( -determinant ) / ( 2 * a );
        cout << " Roots Are Complex And Different " <<endl;
        cout << " x1 : " << realPart << " + " << imaginaryPart << " i " << endl;
        cout << " x2 : " << realPart << " + " << imaginaryPart << " i " << endl;
    }
    return 0;
}
