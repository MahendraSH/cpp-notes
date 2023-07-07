#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter  the size  of arry\n";
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int mx=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		for(int j=i;j<=n;j++)
	{
			sum+=a[j];
		mx=max(mx,sum);
	}
	}
	cout<<mx<<endl;
	return 0;
}
