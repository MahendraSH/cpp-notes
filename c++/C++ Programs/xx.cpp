#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;	
	int t1=0;
		int t2=1;
	
	for(int i=1;i<=n;i++)
	{
		
		
		 int sum=t1+t2;
		cout<<sum<<"\t";
		int next=t2+1;
		t1=t2;
		t2=next;
		
	}
	return 0;
}
