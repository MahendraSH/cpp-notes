#include<bits/stdc++.h>
using namespace  std;
int fun(int n)
{
    if(n>0)
    {
        cout<<n<<"/"<<endl;//analyze the code and out put to know the difference between the cout's.
        fun(n-1);
     cout<<n<<endl;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    fun(n);
    return 0;
}
