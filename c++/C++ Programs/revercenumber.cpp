#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	int reverce=0;
	while(n!=0)
	{
	int last=n%10;
	reverce=reverce*10+last;	
		n=n/10;
	}
	cout<<reverce<<endl;
	return 0;
}
