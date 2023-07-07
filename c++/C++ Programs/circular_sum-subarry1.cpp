#include<bits/stdc++.h>
using namespace std;
int kedain(int a[], int n)
{
	int curr=0;
	int ma=INT_MIN;
	for(int i=0;i<n;i++){
		curr+=a[i];
		if(curr<0)
		{
			curr=0;
		}
		ma=max(ma,curr);
	}
	return ma;
}
int main()
{
	int n;
	cout<<"enter  the size of arry \n";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int warpsum;
	int nonwarpsum;
	nonwarpsum=kedain(a,n);
	int totalsum=0;
	for(int i=0;i<n;i++)
	{totalsum+=a[i];
		a[i]=-a[i];
	}
	warpsum=totalsum+kedain(a,n);
	int ans=max(warpsum,nonwarpsum);
	cout<<ans<<endl;
	return 0;
}
