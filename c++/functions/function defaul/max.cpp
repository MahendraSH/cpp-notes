#include<bits/stdc++.h>
using namespace std;
int ma(int a ,int b,int c=0)
{
    return a>b && a>c ?a:(b>c?b:c);

}
int main()
{
    cout<<ma(7,5,4)<<endl;
    cout<<ma(7,44)<<endl;
}
