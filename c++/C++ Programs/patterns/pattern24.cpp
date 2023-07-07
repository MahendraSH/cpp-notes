//      1
//    2 1 2
//  3 2 1 2 3
//4 3 2 1 2 3 4 
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{ int j;
		for(j=1;j<=n-i;j++)
		{
			cout<<"  ";
		} int k=i;
		for(;j<=n;j++)
		{
			cout<<k--<<" ";
		}int h=2;
		for(;j<=n+i-1;j++)
		{
		  cout<<h++<<" ";	
		}
		cout<<"\n";
	}
	return 0;
}
