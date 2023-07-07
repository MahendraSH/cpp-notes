
// 4.
// CO2	Write a C++ program to create a class Rectangle with data members:
//  length, breadth, area and member functions as:
// i)	Rectangle& setDimensions(const tint&, const int&) – sets the length
// and breadth of arguments using constant references. Use this pointer to return
// the resized Rectangle by reference.
// ii)	int computeArea() – to compute and returns area of a rectangle.
// iii)	int computePerimeter() – to compute and return perimeter of a rectangle.
// iv)	Two constructors, default constructor to initialize data members to zero and an
// overloaded constructor as arguments with breadth having a default value.
// Define all the member functions outside the class. Create objects of Rectangle type
//  and test all the functions. Delete the objects before program terminates.

#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    int area;

public:
    Rectangle();
    Rectangle(int length);

    Rectangle &resetDimention(const int &l, const int &b);

    int computeArea();
    int computePeremeter();

    ~Rectangle()
    {
        cout << "cleared" << endl;
    }
};
Rectangle ::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle ::Rectangle(int length)
{
    this->length = length;
    this->breadth = 1;
}

Rectangle &Rectangle ::resetDimention(const int &l, const int &b)
{
    this->length = l;
    this->breadth = b;
    return *this;
}
int Rectangle::computePeremeter() { return 2 * (length + breadth); }
int Rectangle ::computeArea() { return length * breadth; }

int main()
{
    int l;
    int b;
    Rectangle r;
    cin >> l >> b;
    cout << "r" << endl;
    r.resetDimention(l, b);
    cout << r.computeArea() << endl;
    cout << r.computePeremeter() << endl;
    cout << "r1" << endl;
    Rectangle r1(5);
    cout << r1.computeArea() << endl;
    cout << r1.computePeremeter() << endl;
    Rectangle r2;
    cout << "r2" << endl;
    cout << r2.computeArea() << endl;
    cout << r2.computePeremeter() << endl;
}
