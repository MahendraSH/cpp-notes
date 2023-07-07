#include<iostream>
using namespace std;
int fact(int n)
{
	int fact=1;
	for(int i=2;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	
	cout<<fact(n)<<endl;
	return 0;
}
