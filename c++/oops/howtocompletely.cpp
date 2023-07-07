#include<bits/stdc++.h>
using namespace std;
class  rectangle
{
    int length;
    int breadth;

    public:
        rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r);
     int getLength(int l){return length;}
     int getBreath(int b){return breadth;}
     void setLength(int l);
     void setBreath(int b);
     int area();
     int peremeter();
     bool is_square();
     ~rectangle();

};
int main()
{
    rectangle a(10,4);
    rectangle s(a);
    cout<<s.area()<<endl;
    cout<<a.area()<<endl;
    return 0;

}
rectangle::rectangle()
{
    length=1;
    breadth=1;
}
rectangle::rectangle(int l=0,int b=0)
{
    setLength(l);
    setBreath(b);
}
rectangle ::rectangle(rectangle &r)
{
    setLength(r.length);
    setBreath(r.breadth);

}
void rectangle::setLength(int l)
{
    length=l>0?l:-l;
}
void rectangle::setBreath(int b)
{
    breadth=b>0?b:-b;
}
int rectangle::area()
{
    return length*breadth;
}
int rectangle::peremeter()
{
    return 2*(length+breadth);
}
bool rectangle::is_square()
{
    return length==breadth;

}
rectangle::~rectangle()
{
    cout<<"Rectangle Destroyed"<<endl;
}
