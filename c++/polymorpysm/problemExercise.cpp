#include<bits/stdc++.h>
using namespace std;
class shape
{
public :
    virtual float area()=0;
    virtual float perimeter()=0;
};
class rectangle : public shape
{
    float length;
    float breath;
public:
    rectangle ();
    rectangle(float  l,float b);
    float area();

    float perimeter();

    ~rectangle();
};
class circle : public shape
{
    float radius;
public:
    circle();
    circle(float r);
    float  area ();
    float perimeter();
    ~circle();

};
int main()
{
    shape *p=new rectangle(10,20) ;
    cout<<"area and perimeter of rectangle"<<endl;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
    delete p;
    cout<<"area and perimeter of  circle"<<endl;
    p=new circle(10);
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
}

rectangle::rectangle()
{
    length=1;
    breath=1;
}
rectangle ::rectangle(float l,float b)
{
    length=l>0?l:-l;
    breath=b>0?b:-b;
}
float rectangle::area()
{
        return length*breath;
    }
float rectangle::perimeter()
{
        return 2*(length +breath);
    }
rectangle::~rectangle()
{
    cout<<"rectangle destroyed"<<endl;
}
circle::circle()
{
    radius =1;
}
circle::circle(float r)
{
    radius=r>0?r:-r;
}
float circle::area()
{
    return radius*radius*3.14;
}
float circle::perimeter()
{
    return 2*radius*3.14;
}
circle::~circle()
{
    cout<<"circle destroyed"<<endl;
}

