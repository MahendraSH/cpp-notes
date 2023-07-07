#include<bits/stdc++.h>
using namespace std;
int ma(int a,int b)
{
    return a>b?a:b;
}
int mi(int a,int b)
{
    return a<b?a:b;
}
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int (*f)(int ,int );
    f=ma;
   cout<< (*f)(3,4)<<endl;
   f=sum;
   cout<<(*f)(8,4)<<endl;
   f=mi;
   cout<<(*f)(7,4)<<endl;
   return 0;
}
