//1234
//567
//89
//10
#include<iostream>
using namespace std ;
int main()
{
	int n;
	int num=1;
	cout<<"enter a  number\n";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<num++<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
