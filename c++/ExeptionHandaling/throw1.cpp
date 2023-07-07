#include<iostream>
using namespace std;
class exeption
{

};
int main()
{
    int a, b=0;
    int ans;

  cout<<"enter a number\n";
  std::cin >> a;
  try
  {
      if(b==0)
             throw string("div by zero") ;
    ans=a/b;
  }
  catch (string e)
  {
      cout<<e<<endl;
  }
  cout<<ans<<endl;
  return 0;
}
