#include<iostream>
using namespace std;
class  com
{
    int real;
    int imaginary;
    public:
 com();
 com(int a,int b);
com operator+(com c);

void get();
bool isComplex()
{
    if(imaginary==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
~com();
};
int main()
{
 com c1(10,5);
 com c2(12,4);
 com c;
 c=c1+c2;
 c.get();

 return 0;

}
com:: com()
 {
     real=0;
     imaginary=0;
 }
com:: com(int a,int b)
{
    real=a;
     imaginary=b;
}
com com::operator+(com c)
{
    com temp;
    temp.real=real+c.real;
    temp.imaginary=imaginary+c.imaginary;
    return temp;
}
void com::get()
{
    cout<<real<<"+i"<<imaginary<<endl;
}

com::~com()
{
    cout<<"complex number destroyed"<<endl;
}

