#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number\n";
	cin>>n;
	while(n>0)
	{
		int rem=n%10;
		n=n/10;
		cout<<rem<<endl;
	}
	return 0;
}
