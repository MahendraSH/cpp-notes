
// 5.	
// CO2	Write a C++ program to create a class called Complex and implement the
//  following overloading member functions that return a Complex number after
//   performing addition of input args.
// i)	Complex ADD(int a, Complex s) – where a is an integer(real part) and s 
// is a complex number.
// ii)	Complex ADD(Complex &s1, Complex &s2)

#include<iostream>
using namespace std;
class Complex{
  int a;
  int b;
  public:
  void set()
  {
    cout<<"Enter the real and imagineay part of Complex number"<<endl;
    cin>>a>>b;
  }
  void display()
  {
    cout<<a<<"+ i "<<b<<endl;
  }
  Complex ADD(int x, Complex s) ;

  Complex ADD(Complex &s1, Complex &s2);

};
Complex Complex:: ADD(int x,Complex s)
{
     s.a+=x;
     return s;

}
Complex Complex:: ADD(Complex& s1, Complex &s2)
{
  s1.a+=s2.a;
  s1.b+=s2.b;
  return s1;
}

int main()
{
  Complex a;
  Complex b;
  int n;
  cin>>n;
  a.set();
  b.set();
  a=a.ADD(n,a);
  b=b.ADD(b,a);
  a.display();
  b.display();

}