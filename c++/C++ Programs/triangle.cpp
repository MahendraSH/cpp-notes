#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the three sides of trinangle\n";
	cin>>a>>b>>c;
	if((a==b)&&(b==c))
	{
		cout<<"it is a equilateral triangle\n";
		
	}
	 else if(a==b||b==c||c==a)
	{
		cout<<"it is a isosceles triangle\n";
	}
	else
	{
		cout<<"it is a scalene triangle\n";
	}
	return 0;
}
