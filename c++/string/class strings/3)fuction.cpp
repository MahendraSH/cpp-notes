#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s="how are you?";
  char s1[30],a[20];
  s.copy(s1,s.size());
  cout<<s1<<endl;
  s.copy(a,3);
  a[3]=0;
  cout<<a<<endl;
  cout<<s.find("are")<<endl;
  //cout<<s.rfind('y')<<endl;  //tofind  from last,
  s="how are you?";
  cout<<s.find_first_of('o')<<endl;
  cout<<s.find_first_of('o',6)<<endl;
  cout<<s.find_last_of('o')<<endl;
  cout<<s.find_first_of('ou',6)<<endl;

  return 0;
}
