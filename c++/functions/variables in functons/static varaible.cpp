//static variable
#include<bits/stdc++.h>
using namespace std;
int fun()
{
    static int a=10;
    a++;
    int s=8;
    s++;
    return a;//return s;
    //to see the difference remove the a and put return s;
}
int main()
{
    int x=0;
    cout<<x<<endl;
 x=   fun();
 cout<<x<<endl;

    x= fun();
    cout<<x<<endl;

    x=  fun();
    cout<<x<<endl;

}
