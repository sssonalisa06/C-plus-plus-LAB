#include <iostream>
using namespace std;

class B;

class A
{
    int x;

public:
    void getA()
    {
        cout << "Enter first number: ";
        cin >> x;
    }

    void displayA()
    {
        cout << "First number = " << x << endl;
    }

    friend void swap(A &, B &);
};

class B
{
    int y;

public:
    void getB()
    {
        cout << "Enter second number: ";
        cin >> y;
    }

    void displayB()
    {
        cout << "Second number = " << y << endl;
    }

    friend void swap(A &, B &);
};

void swap(A &a, B &b)
{
    int temp;
    temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main()
{
    A obj1;
    B obj2;

    obj1.getA();
    obj2.getB();

    cout << "\nBefore swapping:\n";
    obj1.displayA();
    obj2.displayB();

    swap(obj1, obj2);

    cout << "\nAfter swapping:\n";
    obj1.displayA();
    obj2.displayB();

    return 0;
}
