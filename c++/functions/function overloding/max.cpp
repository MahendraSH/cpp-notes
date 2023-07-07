#include<bits/stdc++.h>
using namespace std;
int max(int a ,int b,int c)
{

    return a>b && a>c ?a:(b>c?b:c);
}
float max(float a,float b)
{

    return  a>b?a:b;
}
int max(int a ,int b)
{
    return a>b?a:b;
}
int main()
{
    cout<<max(7,10)<<endl;
    cout<<max(10,7,88)<<endl;
    cout<<max(7.8f,4.3f)<<endl;
    return 0;
}
