#include<bits/stdc++.h>
using namespace std;
class com{
    int real;
    int imaginary;
public:
    com();
    com(int a,int b);
    friend ostream & operator<<(ostream &out,com &c);
    friend istream &operator>>(istream &in, com &c);

};
ostream & operator<<(ostream &out ,com &c)
{
    out<<c.real<<"+i"<<c.imaginary<<endl;
    return out;
}
istream &operator>>(istream &in,com& c)
{

   in>>c.real>>c.imaginary;
    return in;
}
int main()
{
 com a;
 cout<<a<<endl;
 cin>>a;
 cout<<a<<endl;
}
com::com()
{
    real=0;
    imaginary=0;
}
com :: com(int a,int b)
{
    real=a;
    imaginary=b;
}
