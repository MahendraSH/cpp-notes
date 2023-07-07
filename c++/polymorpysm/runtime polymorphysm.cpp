#include<bits/stdc++.h>
using namespace std;
class car
{
    public:
  virtual  void start()=0;

};
class inova :public car
{
    public:
        void start()
        {
            cout<<"inova started"<<endl;
        }

};
class swift :public car
{
public :
    void start()
    {
        cout<<"swift started"<<endl;
    }
};
int main()
{

    car*p=new inova();
    p->start();
    delete p;
    p=new swift();
    p->start();
}
