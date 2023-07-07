#include<bits/stdc++.h>
using namespace std;
template<class T>
class rect
{
public:
    int top=0;
    T s[5];
   void  popin(T a);
   T popout();

};
int main()
{
    rect <int>r;
    r.popin(39);
    r.popin(90);
    r.popin(30);
    r.popin(20);
    r.popin(10);
for(int i=0;i<5;i++)
        r.popout();


}
template<class T>
void rect<T> ::popin(T a)
{
    s[top]=a;
    top++;
}
template<class T>
T rect <T>::popout()
{
    top--;
    cout<<s[top]<<endl;

}
