#include<bits/stdc++.h>
using namespace std;
class outer
{
   class innner
    {
        public:
        display()
        {
            cout<<"inner"<<endl;
        }
    };
public:
    innner i;
    fun()
    {
        i.display();
    }



};
int main()
{
    outer u;
    u.fun();
}
