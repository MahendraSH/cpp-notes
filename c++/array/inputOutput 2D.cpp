#include<bits/stdc++.h>
using namespace std;
int  main()
{
   int n;
   cin>>n;
   int a[n][n];
   for(auto &i:a)
   {
       for(auto &j:i)
        cin>>j;
   }
   for(auto &i:a)
   {
       for(int j:i)
        cout<<j<<" ";
       cout<<endl;
   }
}

