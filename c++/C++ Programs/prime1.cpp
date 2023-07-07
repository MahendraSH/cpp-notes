#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	bool flag=0;
	cout<<"enter a number \n";
	cin>>n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			cout<<"not a prime number \n";
			flag=1;
			break;
		}
	 } 
	 if(flag==0)
	 {
	 	cout<<"the number is prime\n";
	 }
	 return 0;
	
}
