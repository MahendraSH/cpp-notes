#include<iostream>
using namespace std;
int maxi(int n,int max)
{
	if(n>max)
	{
		return n;
	}
	else{
		return max;
	}
}
int mini(int n,int min)
{
	if(n<min)
	{
		return n;
	}
	else
	{
		return min;
	}
}
int main()
{
	int n;
	cin>>n;
	int max,min;
	while(n>=0)
	{
		int min=n;
		int max=n;
		cin>>n;
	    max=maxi(n,max);
	    min=mini(n,min);
	}
	cout<<max<<min<<endl;
	return 0;
	
}
