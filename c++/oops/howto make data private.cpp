#include<bits/stdc++.h>
using namespace std;
class rectangle
{

 int length;
 int bredth;
 public:
void setLength(int l)
{
    length=(l>0?l:-l);
}
void setBredth (int b)
{
    bredth=(b>0?b:-b);
}
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
    rectangle r;
   r.setLength(30);
   r.setBredth(20);
   cout<<r.area()<<endl;
   cout<<r.peremeter()<<endl;
    return 0;
}

