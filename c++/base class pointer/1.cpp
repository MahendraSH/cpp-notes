#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    public:
    void primeter()
    {
        cout<<"fun 1"<<endl;
    }

    void area()
    {
        cout<<"area of recctangle"<<endl;
    }
};
class cuboid : public rectangle
{
public:
    void volume()
    {
        cout<<"perimeter of rectangle"<<endl;
    }
};
int main()
{
rectangle *p=new cuboid();
p->area();
p->primeter();
}
