//decimalTOhexadeciml
//this is not working in devc++
#include<bits/stdc++.h>
using namespace std;
string decimalTOhexadeciml(int n)
{
	string ans="";
	int a=1;
	while(a<=n)
	a*=16;
	a/=16;
	while(a>0)
	{int lastdigit=n/a;
	if(lastdigit>=0&&lastdigit<=9)
	
		ans=+to_string(lastdigit);
	
	else
	{
		char c=lastdigit+'A'-10;
		ans.push_back(c);
	}
	return ans;
		
	}
}
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	string ans=decimalTOhexadeciml(n);
	cout<<ans<<endl;
	return 0;
}
