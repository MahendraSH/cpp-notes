//decimalTOoctal
#include<bits/stdc++.h>
using namespace std;
int decimalTOoctal(int n)
{
	int ans=0;
	int a=1;
	while(a<=n)
	a*=8;
	a/=8;
	while(a>0)
	{
		int lastdigit=n/a;
		ans=ans*10+lastdigit;
		n=n-a*lastdigit;
		a/=8;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	int ans=decimalTOoctal(n);
	cout<<ans<<endl;
	return 0;
}
