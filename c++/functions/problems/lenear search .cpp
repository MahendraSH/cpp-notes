#include<bits/stdc++.h>
using namespace std;
int lenearSearch(int a[],int n,int k)
{

    for(int i=0;i<n;i++ )
    {
        if(a[i]==k)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(auto  &c:a)
    {
        cin>>c;
    }
    cin>>k;
  cout<<  lenearSearch(a,n,k)<<endl;
    return 0;
}
