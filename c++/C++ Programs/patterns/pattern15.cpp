//    ****
//   *  *
//  *  *
// ****
#include<iostream>
using namespace std ;
int main ()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=n;j++)
		{
			if(i==1||j==1||j==n||i==n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
