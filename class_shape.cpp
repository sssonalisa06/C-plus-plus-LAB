#include <iostream>
using namespace std;

class Shape
{
private:
    float radius;
    float length;
    float width;

public:

    Shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;
    }

    void circle()
    {
        float perimeter;
        perimeter = 2 * 3.14 * radius;

        cout << "Perimeter of Circle = " << perimeter << endl;
    }

    void rectangle()
    {
        float perimeter;
        perimeter = 2 * (length + width);

        cout << "Perimeter of Rectangle = " << perimeter << endl;
    }

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
