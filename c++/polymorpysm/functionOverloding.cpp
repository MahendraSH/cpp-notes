#include<bits/stdc++.h>
using namespace std;
class rectangle
{
public:
    void area()
    {
        cout<<"area of rectangle"<<endl;
    }
};
class cuboid :public rectangle
{
public:
    void area()
    {
    cout<<"surface area of cuboid"<<endl;
    }
};
int main()
{
 rectangle *p=new cuboid();
 p->area();
 cuboid c;
 c.area();
 return 0;
}
