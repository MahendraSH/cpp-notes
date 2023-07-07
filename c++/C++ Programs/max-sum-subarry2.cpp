#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of arry\n";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int curr[n+1];
	curr[0]=0;
	for(int i=1; i<=n;i++)
	{
		curr[i]=curr[i-1]+a[i-1];
	}
	int ma=INT_MIN;
	for(int i=0;i<=n;i++)
	{
		
		for(int j=0;j<i;j++)
		{int sum=0;
			sum=curr[i]-curr[j];
			ma=max(ma,sum);
		}
	}
	cout<<ma<<endl;
	return 0;
}
