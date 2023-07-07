#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    s.resize(40);
    s="mahendra are u bussy then what are u doing ";

    cout<<s.capacity()<<endl;
    cout<<"maximum size of ="<<s.max_size()<<endl;

    if(s.empty())
        cout<<"empty"<<endl;
    else
        cout<<s<<endl;
    s.clear();

    if(s.empty())
        cout<<"empty"<<endl;
    else
        cout<<s<<endl;

    return 0;

}
