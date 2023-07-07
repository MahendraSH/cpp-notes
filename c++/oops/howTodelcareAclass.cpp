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
    rectangle a1,a2;
    cin>>a1.length;
    cin>>a1.bredth;
    cin>>a2.length;
    cin>>a2.bredth;
    cout<<a1.area()<<endl;
    cout<<a1.peremeter()<<endl;
    cout<<a2.area()<<endl;
    cout<<a2.peremeter()<<endl;
    return 0;

}
