#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a;
 cin>>a;
 int &n=a;
 int b=12;
 cout<<a<<" "<<n<<endl;
 a++;
 n++;
 cout<<a<<" "<<n<<endl;
 n=b;
 cout<<a<<" "<<n<<endl;
 return 0;
}
