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
	int sum=0;
	for(int i=0;i<n;i++)
	{int curr=0;
		for(int j=i;j<n;j++)
		{
			curr+=a[j];
		
		cout<<curr<<endl;
		sum+=curr;
	    }
	}
	cout<<"_______________________________\n";
	cout<<sum<<endl;
	return 0;
}
