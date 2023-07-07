#include<bits/stdc++.h>
using namespace std;
class rectangle
{int lenght;
int breath;
public:
    rectangle();
    rectangle(int a,int b);
    int getLenght(){return lenght;}
    int getBreath(){return breath;}
    void setLength(int l);
    void setBreath(int b);
    int area();
    ~rectangle();
};
class cuboid : public rectangle
{
    int hight;
    public:
    cuboid();
    cuboid(int a );
    int volume();
    ~cuboid();
};
int main()
{
cuboid c(10);
c.setLength(12);
c.setBreath(20);
cout<<c.volume()<<endl;
return 0;

}
rectangle::rectangle()
{
    lenght=1;
    breath=1;
}

 rectangle::   rectangle(int a,int b)
 {
     lenght=a;
     breath=b;
 }

    void rectangle:: setLength(int l)
    {
         lenght=l>0?l:1;
    }
    void rectangle::setBreath(int b)
    {
       breath=b>0?b:1;
    }
    int rectangle:: area()
    {
        return lenght*breath;
    }
 rectangle::   ~rectangle(){
     cout<<"rectangle is destroyed \n"<<endl;
    }
    cuboid::cuboid()
    {
    hight=1;
    }
    cuboid ::cuboid(int a )
    {
        hight=a;
    }
   int  cuboid::volume()
    {
        return area()*hight;
    }
    cuboid::~cuboid()
    {
        cout<<"destr"<<endl;
    }
