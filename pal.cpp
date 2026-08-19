#include <iostream>
using namespace std;

int main (){
    int n, original, reverse=0, digits;
    cout<< "Enter a number:";
    cin>>n;

    original=n;

    while(n>0){
        digits = n%10;
        reverse= reverse*10+ digits;
        n=n/10;
    }
    if (original== reverse)
    cout<<"palindrome";
    else
    cout<<"Not palindrome";

    return 0;
}