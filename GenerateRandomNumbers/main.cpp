#include <iostream>
#include <stdlib.h>
using namespace std;
// C++ Program to Generate Random Numbers between 0 and 100
int main()
{
    int i , num;
    cout << "Generating Random Number : " ;
    for( i = 0 ; i <= 10 ; i++ )
    {
        num = rand() % 10;
        std::cout << "  " << num << " " << endl ;
    }

    std::cout << "\n";
    return 0;
}
