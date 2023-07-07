//  1
// 1 2
//1 2 3
#include<iostream>
using namespace std;
int main()
{
	cout<<"enter a number \n";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
