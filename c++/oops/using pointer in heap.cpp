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
    rectangle *p=new rectangle();
    cin>>p->length;
    cin>>p->bredth;
    cout<<p->area()<<endl;
    cout<<p->peremeter()<<endl;
    delete p;

    return 0;
}
