#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"enter the two number n1<n2 \n ";
	cin>>n1>>n2;
	for(int i=n1;i<=n2;i++)
	{
		if(i%2==0)
		{
			continue;
		}
		cout<<i<<endl;
	}
	return 0;
}
