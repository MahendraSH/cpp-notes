//a dimond in a rectangle
//*********
//**** **** it is important question.
//***   ***
//**     **
//*       *
//*       *
//**     **
//***   ***
//**** ****
//**********
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<"*";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			if(j==1||j==2*i-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
	    }
	    for(int j=1;j<=n-i;j++)
		{
				cout<<"*";
		}
			cout<<"\n";
		
	}
		
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<"*";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			if(j==1||j==2*i-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
	    }
	    for(int j=1;j<=n-i;j++)
		{
				cout<<"*";
		}
			cout<<"\n";
		
	}
	return 0;
}
