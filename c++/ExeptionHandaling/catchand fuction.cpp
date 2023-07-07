#include<bits/stdc++.h>
using namespace std;
int  division(int a,int b) throw (int)
{
    if(b==0)
            throw 1;
    return a/b;
}
int main()
{
    int a,b;
    b=0;
    cout<<"Enter the a num"<<endl;

    cin>>a;
    try{
    division(a,b);
    }
    catch(int e)
    {
        cout<<"error-"<<e<<" divsion by zero"<<endl;
    }
}
