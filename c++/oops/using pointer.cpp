#include<bits/stdc++.h>
using namespace std;
class rectangle
{
public:
 int length;
 int bredth;
 int area()
 {
     return length*bredth;
 }
 int peremeter ()
 {
     return 2*(length+bredth);
 }
};
int main()
{
    rectangle a;
    rectangle *p;
    p=&a;
    cin>>p->length;
    cin>>p->bredth;
    cout<<p->area()<<endl;
    cout<<p->peremeter()<<endl;
    return 0;
}
