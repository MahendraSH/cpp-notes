// 11.

// CO4	a)	Write two function templates in C++ to
// i)	Sort the numbers
// ii)	To search a given number
// Demonstrate the above functions on array of integers and double.
#include <iostream>
using namespace std;
template <class x>
void sort(x *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                x temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    double d[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    sort<int>(a, n);
    sort<double>(d, n);
    cout << "afer sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << d[i] << " ";
    }
}
