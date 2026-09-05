#include <iostream>
using namespace std;
int main()
{
    int num, originalNum, tempNum, remainder, digits=0, result = 0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    tempNum = num;
    while (tempNum !=0)
    {
        digits++;
        tempNum = tempNum / 10;
    }
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        int power = 1;
        for (int i=1; i < digits; i++)
        power *= remainder;
        result == result + power;
        originalNum = originalNum/10;
    }
    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
    return 0;
}