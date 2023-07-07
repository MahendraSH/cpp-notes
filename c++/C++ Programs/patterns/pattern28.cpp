//     1         pascal`s trangle
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
#include<iostream>
using namespace std; 
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	int c=1;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			if(j==i||j==0)
			{
				cout<<"1 ";
			}
			else
			{
				c=c*(i-j+1)/j;
				cout<<c<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
