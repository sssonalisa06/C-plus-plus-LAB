#include <iostream>
using namespace std;

class Shape
{
private:
    float radius;
    float length;
    float width;

public:

    // Constructor
    Shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;
    }

    // Function for circle
    void circle()
    {
        float perimeter;
        perimeter = 2 * 3.14 * radius;

        cout << "Perimeter of Circle = " << perimeter << endl;
    }

    // Function for rectangle
    void rectangle()
    {
        float perimeter;
        perimeter = 2 * (length + width);

        cout << "Perimeter of Rectangle = " << perimeter << endl;
    }

    // Destructor
    ~Shape()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    float r, l, w;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    Shape s(r, l, w);

    s.circle();
    s.rectangle();

    return 0;
}