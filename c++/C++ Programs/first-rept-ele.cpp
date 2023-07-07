#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number and an arry \n";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	const int N=1000;
	int dx[N];
	for(int i=0;i<N;i++)
	{
		dx[i]=-1;
	}
	int  mi=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(dx[a[i]]!=-1)
		{
			mi=min(mi,dx[a[i]]);
		}
		else
		{
			dx[a[i]]=i;
		}
		
	}
	if(mi==INT_MAX)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<mi+1;
	}
	
	return 0;
}

