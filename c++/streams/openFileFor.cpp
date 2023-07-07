#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
  ifstream ifline;
  ifline.open("y.text");
if(!ifline)
   cout<<"not found"<<endl;
    string str;
  ifline >>str;
  cout<<str;
  ifline>>str;
  cout<<str;
  int n;
  ifline>>n;
  cout<<n;
  return 0;
}
