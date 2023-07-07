#include <iostream>
using namespace std;
class Stack
{
    int *a;
    int top = -1;
    int maxSize;

public:
    Stack();
    Stack operator--(int);
    friend ostream &operator<<(ostream &out, Stack &s);
    friend Stack &operator+(Stack &s, int n);
    // friend int opearator-- (Stack &s);
};

Stack Stack::operator--(int)
{
    if (top == -1)
    {
        cout << "under flow" << endl;
    }
    else
    {
        cout << a[top--] << endl;
    }
    return *this;
}
Stack::Stack()
{
    top = -1;
    maxSize = 5;
    a = new int[maxSize];
}
// int operator--(Stack &s)
// {
//   if(s.top==-1)
//   {
//     cout<<"Stak underflow"<<endl;
//     return -9999;
//   }
//   return s.a[s.top--];
// }
ostream &operator<<(ostream &out, Stack &s)
{
    out << endl;
    if (s.top == -1)
    {
        out << " Empty stack";
        return out;
    }
    for (int i = 0; i <= s.top; i++)
        out << s.a[i] << " ";
    out << endl;
    return out;
}
Stack &operator+(Stack &s, int n)
{
    if (s.top == s.maxSize - 1)
    {
        cout << " stack is full or overloded " << endl;
    }
    s.top++;
    s.a[s.top] = n;
    return s;
}

int main()
{
    int n;
    Stack s;
    cout << "Enter number " << endl
         << "1.push " << endl
         << "2.pop"
         << "any number of exit" << endl;
    cin >> n;
    while (n == 1 || n == 2)
    {
        if (n == 1)
        {
            cout << "Enter the ele";
            int ele;
            cin >> ele;
            s = s + ele;
            cout << s << endl;
        }
        else if (n == 2)
        {
            s--;
            // cout <<x<<endl;
            cout << s << endl;
        }
        else
        {
            break;
        }
        cout << "Enter number " << endl
             << "1.push " << endl
             << "2.pop"
             << "any number of exit" << endl;
        cin >> n;
    }
}
