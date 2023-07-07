#include<bits/stdc++.h>
using namespace std;
float sum(float a ,float b){
    return a+b;
}
int sum(int a,int b ,int c)
{
    return a+b+c;
}
int sum(int a,int b){
return a+b;
}
int  main()
{
  cout<<sum(12,11)<<endl;
  cout<<sum(7,4,5)<<endl;
  cout<<sum(7.8f,8.2f )<<endl;
  return 0;
}
