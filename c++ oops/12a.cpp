// 12 a
// progam calulaor template class
#include <iostream>
using namespace std;
template <class x>
class Calculator
{
    x n1, n2;

public:
    Calculator(x a, x b)
    {
        n1 = a;
        n2 = b;
    }
    void display()
    {
        cout << "addtion\t" << n1 + n2 << endl;
        cout << "sub\t" << n1 - n2 << endl;
        cout << "mul\t" << n1 * n2 << endl;
        cout << "div\t" << n1 / n2 << endl;
    }
};
int main()
{
    Calculator<int> a(3, 4);
    Calculator<double> d(4.4, 4.5);
    a.display();
    d.display();
}