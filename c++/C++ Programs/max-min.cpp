#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int minno=INT_MAX;
	int maxno=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		 maxno=max(maxno,arr[i]);
		 minno=min(minno,arr[i]);
	}
	cout<<maxno<<" \t"<<minno<<endl;
	return 0;
}
