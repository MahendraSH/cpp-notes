#include<iostream>
using namespace std;
int evenodd (int n)
{
	if(n%2==0)
	{
		cout<<"even\n"<<endl;
	}
	else
	{
		cout<<"odd\n"<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter a number\n ";
	cin>>n;
	evenodd(n);
	return 0;
}
