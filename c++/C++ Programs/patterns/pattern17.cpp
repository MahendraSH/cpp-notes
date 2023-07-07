//house pattern.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number\n";
	cin>>n;
	
	int m=2*n;
	for(int i=1;i<=n;i++)
	{ for(int j=1;j<=m;j++)
	{
		cout<<" ";
	}
		for(int j=n-i;j>=1;j--)
		{
			cout<<" ";
			
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++)
	{
		
		
		for(int j=1;j<=m;j++)
		{
			if(i==1||i==m||j==1||j==m)
			{
				cout<<"|";
			}
			
			else if((j%3==0)&&(i%3==0))
			{
				cout<<"#";
			}
			else
			{
				cout<<" ";
			}
		}
		
		for(int j=1;j<=m;j++)
		{
			if(i==1||i==m||j==1||j==m)
			{
				cout<<"|";
			}
			else if((i==m/4)||j==m/4||j==m-m/4)
			{
				cout<<"|";
			}
			else if((j%3==0)&&(i%3==0))
			{
				cout<<"#";
			}
			else
			{
				cout<<" ";
			}
			
	    }
		for(int j=1;j<=m;j++)
		{
			if(i==1||i==m||j==1||j==m)
			{
				cout<<"|";
			}
			
			else if((j%3==0)&&(i%3==0))
			{
				cout<<"#";
			}
			else
			{
				cout<<" ";
			}
		}
		
		cout<<endl;
	}
	return 0;
}
