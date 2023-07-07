#include"bits/stdc++.h"
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of arry \n";
	cin>>n;
	int s;
	cout<<"enter a sum of subarry\n";
	cin>>s;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int i=1,j=1,ed=0,st=0;
	int sum=0;
	while(j<n&&sum+a[j]<=s)
	{
		sum+=a[j];
		j++;
		
	}
	if(sum=s)
	{
		cout<<i+1<<" "<<j<<endl;
		return 0;
	}
	while(j<n)
	{
		sum+=a[j];
		while(sum>s)
		{
			sum-=a[i];
			i++;
	    }
		if(sum==s)
		{
		

			st=j+1;
			ed=i+1;
			break;
		}
       	
		j++;
	}
	cout<<st<<" "<<ed<<endl;
	return 0;
}
