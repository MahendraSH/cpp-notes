#include<iostream>
using namespace std;
class com
{
    int real;
    int imaginary;
    public:
    com();
    com(int a,int b);
    friend com operator+(com &c1 ,com &c2);
    void get();
    ~com();
};
int main()
{
    com c1(10,2),c2(2,33),c3;
    c3=c1+c2;
   c3. get();
}
  com::com()
  {
      real=0;
      imaginary=0;
  }
  com::  com(int a,int b){

    real=a;
    imaginary=b;
    }


 com:: ~com()
    {
        cout<<"destroyed"<<endl;
    }
void com::get()
{
    cout<<real<<"+i"<<imaginary<<endl;
}
com  operator+(com &c1 ,com &c2)
    {
        com temp;
        temp.real=c1.real+c2.real;
        temp.imaginary=c1.imaginary+c2.imaginary;
        return temp;
    }
