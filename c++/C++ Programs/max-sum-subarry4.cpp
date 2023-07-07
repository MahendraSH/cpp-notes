#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of arry\n";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ma=INT_MIN;
	for(int i=0;i<n;i++)
	{
		int curr=0;
		curr+=a[i];
		if(a[i]<0)
		{
			curr=0;
		}
		ma=max(ma,curr);
	}
	cout<<ma<<endl;
	return 0;
}
