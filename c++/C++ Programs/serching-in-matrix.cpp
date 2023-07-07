#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cout<<"enter  the row and col\n";
	cin>>row>>col;
	int a[row][col];
	{
		for(int i=1;i<=row;i++)
		{
			for(int j=1;j<=col;j++)
			{
				cin>>a[i][j];
			}
			cout<<"\n";
		}
		bool f;
		int k;
		cout<<"enter the k\n";
		cin>>k;
		for(int i=1;i<=row;i++)
		{
			for(int j=1;j<=col;j++)
			{
				if(a[i][j]==k)
				{cout<<i<<" "<<j<<endl;
					f=true;
				}
			}
			cout<<"\n";
		}
		if(f)
		{
			cout<<"found\n";
		}
		else
		{
			cout<<"not found\n";
		}
	}
	return 0;
}
