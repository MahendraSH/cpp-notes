//finding a number is prime or not.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number \n";
	cin>>num;
	int i;
	for( i=2;i<num;i++)
	{
		if(num%i==0)
		{
			cout<<"the number entered is not a prime\n";
			break;
		}
	
		
	}
	if(i==num)
	{
		cout<<"the number is prime\n";
	}
}
