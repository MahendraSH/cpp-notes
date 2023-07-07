#include <iostream>
using namespace std;
#include <math.h>
class Shape
{
protected:
    float area, perimeter;

public:
    Shape(){};
    virtual void initialize() = 0;
    virtual float computearea() = 0;
    virtual float computeperimeter() = 0;
    virtual ~Shape(){};
};
class triangle : public Shape
{
protected:
    int h, b;

public:
    void initialize()
    {
        cout << "Enter the height of the rectangle" << endl;
        cin >> h;
        cout << "Enter the breadth of the rectangle" << endl;
        cin >> b;
    }
    float computearea()
    {
        area = (h * b) / 2;
        return area;
    }
    float computeperimeter()
    {
        perimeter = h + b + (sqrt(h * h + b * b));
        return perimeter;
    }
};
class rectangle : public Shape
{
protected:
    int l, b;

public:
    void initialize()
    {
        cout << "Enter the length of the rectangle" << endl;
        cin >> l;
        cout << "Enter the breadth of the rectangle" << endl;
        cin >> b;
    }
    float computearea()
    {
        area = (l * b);
        return area;
    }
    float computeperimeter()
    {
        perimeter = 2 * (l + b);
        return perimeter;
    }
};
int main()
{
    Shape *c1;
    triangle c2;
    rectangle c3;
    c1 = &c2;
    c1->initialize();
    cout << "The area of the triangle is" << c1->computearea() << endl;
    cout << "The perimeter of the triangle is" << c1->computeperimeter() << endl;
    c1 = &c3;
    c1->initialize();
    cout << "The area of the rectangle is" << c1->computearea() << endl;
    cout << "The perimeter of the rectangle is" << c1->computeperimeter() << endl;
}