//1
//12
//123
//1234
#include<iostream>
using namespace std ;
int main ()
{
	cout<<"enter a number \n";
	int n;
	int num=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<num++<<"\t";
		}
		cout <<"\n";
	}
	return 0;
}
