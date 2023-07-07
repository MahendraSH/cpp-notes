//octalTodecimal
#include<bits/stdc++.h>
using namespace std;
int octalTodecimal(int n)
{
	int ans=0;
	int a=1;
	while(n>0)
	{
		int lastdigit =n%10;
		ans+=a*lastdigit;
		a*=8;
		n/=10;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"enter a octal number \n";
	cin>>n;
	int ans=octalTodecimal(n);
	cout<<ans<<endl;
	return 0;
}
