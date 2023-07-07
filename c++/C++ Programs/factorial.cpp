#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number\n";
	cin>>n;
	int fact=1;
	int on=n;
    for(int i=2;i<=n;i++)
    {
    	fact*=i;
	}
	cout<<"factorial of"<<on<<"="<<fact<<endl;
	return 0;
}
