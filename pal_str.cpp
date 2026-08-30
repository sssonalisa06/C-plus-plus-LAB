#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, reverse = "";

    cout << "Enter a string: ";
    cin >> str;

    for(int i = str.length() - 1; i >= 0; i--)
    {
        reverse = reverse + str[i];
    }

    if(str == reverse)
        cout << "The string is a palindrome";
    else
        cout << "The string is not a palindrome";

    return 0;
}