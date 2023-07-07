#include<bits/stdc++.h>
using namespace std;
class your;
class My
{
 private:
     int a=10 ;
 protected:
    int b=11;
 public:
    int c=1;
    friend your;
};
class your
{
    public:
    My m;
    void fun() {
    cout<<m.a<<endl;
    cout<<m.b<<endl;
    cout<<m.c<<endl;
    }

};
int main()
{
    your h;
h.fun();
}
