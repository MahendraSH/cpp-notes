#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of\n";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ma=INT_MIN;
	int curr=0;
	for(int i=0;i<n;i++){
		curr+=a[i];
		if(curr<0)
		{
		curr=0;	
		}
		ma=max(curr,ma);
	}
	cout<<ma<<endl;
}
