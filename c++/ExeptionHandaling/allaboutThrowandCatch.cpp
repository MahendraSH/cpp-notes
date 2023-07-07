#include<bits/stdc++.h>
using namespace std;
class exeption

{

};
int fun1(int a,int b)throw(int )
{
    if(b==0)
      throw 101;
    return a/b;

}
int fun2(int a,int b) throw (exeption)
{
    if(b==0)
     throw exeption();
    return a/b;
}
void fun3(int a,int b) throw (string)
{
    if(b==0)
       throw string("dev by zero");
       cout<<a/b;
}
int main()
{
    int a=10, b=2;
    try
    {
      cout<<  fun1(a,b)<<endl;

     cout<<   fun2(a,b)<<endl;
      b=0;
        fun3(a,b);
        cout<<endl;
    }
    catch(int e)
    {
        cout<<"error-"<<e<<endl;
    }
    catch(exeption e)
    {
        cout<<"exeption"<<endl;
    }
    // catch(string s)
    // {
    //     cout<<s<<endl;
    // }
    catch(...)
    {
        cout<<"all catch error"<<endl;
    }
    return 0;

}
