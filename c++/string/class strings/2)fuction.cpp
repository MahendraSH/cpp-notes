#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s;
    cin>>s;
    cout<<s<<endl;
    s.append("world");
    cout<<s<<endl;
    s.insert(10," how are u  good morning?",10);
    cout<<s<<endl;
    s.replace (10,s.length()-10," what are u doing?");
    cout<<s<<endl;
    s.erase();
    cin>>s;
    s.push_back('h');
 cout<<s<<endl;

 s.pop_back();
    cout<<s<<endl;
    string s2="coding";

   cout<<s<<" "<<s2<<endl;
   s. swap(s2);
   cout<<s<<" "<<s2<<endl;
    return 0;
}
