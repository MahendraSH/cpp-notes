#include<iostream>
using namespace std;

template <class F>
F ma(F a, F b)
{

    return a>b?a:b;
}
int main()
{
    cout<<ma(10,29)<<endl;
    cout<<ma(4.4f,3.4f)<<endl;
    cout<<ma(4.5,3.4)<<endl;
    return 0;
}
