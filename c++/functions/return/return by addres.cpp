#include<bits/stdc++.h>
using namespace std;
int * fun(int n)
{
int *p=new int [n];
for(int i=0;i<n;i++)
    p[i]=i*5;
return p;
}
int main()
{
    int n;
    cin>>n;
    int *q=fun(n);
    for(int i=0;i<n;i++)
        cout<<q[i]<<" ";
        delete []q;
        q=nullptr;
    return 0;
}
