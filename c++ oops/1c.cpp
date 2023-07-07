// c) Write a C++ program that will accept an array of numbers and display the number
// of times the given number occurred in the array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ele;
    cin >> ele;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ele == a[i])
            count++;
    }
    cout << count << endl;
}