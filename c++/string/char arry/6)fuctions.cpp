#include<bits/stdc++.h>
using namespace std;
int main()
{
  char s1[20]="HellO";
  char s2[20]="Hello";
  int x=strcmp(s1,s2);
  if(x==0)
    cout<<"equal "<<endl;
  else{
    if(x>0)
        cout<<s1<<endl;
    else
        cout<<s2<<endl;
  }
  return 0;
}
