// 		d) Raising a number n to a power p is same as multiplying n by 
// itself p times. Write a function called
//  power that takes a double value for n and an integer value for p
//  returns the result as double value. Use a default argument of 2 for p
//  so that if this argument is omitted the number will be squared. Write a 
//  C++ program to test the
// function.
#include<iostream>
using namespace std;
int power(int n,int p=2)
{
    int m=1;
    for(int i=0;i<p;i++)
    {
       m*=n;

    }
    return m;
}

int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
  cout<<power(n,p)<<endl;
  cout<<power(n)<<endl;
}