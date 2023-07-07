#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	int i=2;
	int curr=2;
	int ans=2;
	int pd=a[1]-a[0];
	while(i<n)
	{
		if(pd==a[i]-a[i-1])
		{
			curr++;
		}
		else
		{
			curr=2;
		}
		ans=max(ans,curr);
		i++;
	}
	cout<<ans<<endl;
	return 0;
}
