#include<iostream>
using namespace std;
int sn(int n)
{int sum=0;
	for(int  i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
	
}
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
     int sum=sn(n);
     cout<<sum<<endl;
     return 0;
}
