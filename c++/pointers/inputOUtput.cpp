#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;

    int  *p;
    p=&a;
    char ch;
    char *ptr;
    ptr=&ch;
    float f;
    float *h;
    h=&f;
    cin>>a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(ptr)<<endl;
        cout<<sizeof(h)<<endl;
    return 0;
}
