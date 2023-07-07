// 11
// 		b) A point on the 2D can be represented by two numbers: an x co-ordinate
// and a y co- ordinate. The sum of two points can be defined as a new point whose x
//  co- ordinate is the sum of x co-ordinates of both points and same for y co-ordinates.
//  Using
// function template, find the third point in C++.

#include <iostream>
using namespace std;
template <class x>
void add(x x1, x x2, x y1, x y2)
{
    cout << x1 + x2 << " " << y1 + y2 << endl;
}
int main()
{
    add<int>(2, 3, 4, 5);
    add<double>(3.4, 4.4, 5.4, 6.4);
}
