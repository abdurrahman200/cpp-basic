#include <iostream>
using namespace std;

int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    cout << "Enter any character to check :: ";
    cin >> c;

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
    {
        cout<<"\nThe Entered Character [ "<<c<<" ] is a Vowel.\n";
    }
    else
    {
        cout<<"\nThe Entered Character [ "<<c<<" ] is a Consonant.\n";
    }

    return 0;
}
