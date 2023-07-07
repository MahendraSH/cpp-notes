//smallest-+venum-missing.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the sizeof arry\n";
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	const int N=1000;
	bool check[N];
for(int j=1;j<=N;j++)
	{
		check[j]=false;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=0)
		{
			check[a[i]]=true;
		}
		
	}
	int ans=-1;
	for(int i=1;i<=n;i++)
	{
		if(check[i]==false)
		{
			ans=i;
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
	
}
