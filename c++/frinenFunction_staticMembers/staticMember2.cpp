#include<bits/stdc++.h>
using namespace std;

class student
{

    string name ;
    int roolNo;

    static int addNo;
    public:
    student(string c)
{
    addNo++;
    name =c;
    roolNo=addNo;
}
static int getaddno()
{
    return addNo;
}

void display()
{
    cout<<"name="<<name<<endl;
    cout<<"roolNO="<<roolNo<<endl;
}
};
int student ::addNo=0;

int main()
{
    student s1("manju");
    student s2("valabha");
    student s3("raju");
    s1.display();
    s3.display();
    cout<<student::getaddno()<<endl;
    return 0;
}
