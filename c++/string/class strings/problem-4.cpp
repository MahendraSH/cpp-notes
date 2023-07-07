#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cvovel=0,ccon=0,cspace=0;
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o' ||s[i]=='u'||s[i]=='A'||s[i]=='E' ||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            cvovel++;
        }
        else if(s[i]==' ' && s[i+1]!=' ')
        {
            cspace++;
        }
        else if(s[i]>=65 && s[i]<='Z'  || s[i]>='a' && s[i]<='z')
        {

            ccon++;
        }
    }
    cout<<cvovel<<" "<<ccon<<" "<<cspace<<endl;
    return 0;
}
