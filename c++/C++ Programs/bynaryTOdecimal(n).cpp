#include<bits/stdc++.h>
using namespace std;
int bynaryTOdecimal(int n)
{
	int ans=0;
	int a=1;
	while(n>0)
	{
		int lastdigit=n%10;
		ans+=a*lastdigit;
		n/=10;
		a*=2;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"enter a bynary number \n";
	cin>>n;
	int ans=bynaryTOdecimal(n);
	cout<<ans<<endl;
	return 0;
}
