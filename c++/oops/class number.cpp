#include<bits/stdc++.h>
using namespace std;
class number
{
    int n;
    public:
    number ();
    number(int n);
    number(number &num);
    void setNumber(int a);
  int   getNumber(){return n;}
  int factorial();
  int sqroot();
  int revrese();
  int power(int e);
  bool primeOrnot();
  bool oddOReven();
  bool positiveORnegative();
  bool amstrong();
~number();
};
int main()
{
    number n(5);
    number a(153);
    cout<<n.power(4)<<endl;
    cout<<a.revrese()<<endl;
    if(a.amstrong())
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    cout<<n.factorial()<<endl;

 cout<<n.getNumber()<<endl;

}

 number::  number (){
     n=0;
 }
number:: number(int n){
        setNumber(n);
    }
number:: number(number &num)
    {
        n=num.n;
    }
 void   number::setNumber(int a)
    {
        n=a;
    }

int  number:: factorial()
  {
      int sum=1;
      int on=n;
      for(int i=1;i<=on;i++)
        sum*=i;
      return sum;
  }
  int number::sqroot()
  {

      for(int i=1;i<=n/2;i++)
      {
          if(i*i==n)
          {
              return i;
          }
          else
            return n;
      }
  }
  int number:: revrese()
  {
      int sum=0;
      int no=n;
      while(no>0)
      {
          int last =no%10;
          sum=sum*10+last;
          no/=10;
      }
      return sum;
  }
  int number::power(int e)
  {
    int sum=n;
    for(int i=1;i<e;i++)
    sum*=n;
    return sum;
  }
  bool number::primeOrnot()
  {
      for(int i=2;i<=sqroot();i++)
      {
          if(n%i==0)
          {
              return false;
          }

      }
      return true;
  }
  bool number::oddOReven()
  {
     if( n%2==0)
        return false;
     else
        return true;
  }
  bool number::positiveORnegative()
  {
      if(n>0)
        return true;
      else
        return false;
  }
  bool number::amstrong()
  {
      int on=n;
      int sum=0;
      while(on>0)
      {
          int last =on%10;
          on/=10;
          sum=sum+pow(last,3);
      }
      if (sum==n)
        return true;
      else
        return false;

  }
  number::~number()
  {
      cout<<"number destroyed"<<endl;
  }
