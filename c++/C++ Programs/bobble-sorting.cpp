#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	int arr[n];
	for(int i=0;i<+n;i++)
	{
		cin>>arr[i];
	}
	int counter =0;
	while(counter<n)
	{
		for(int i=0;i<=n-counter;i++)
		{
		if(arr[i]>arr[i+1])
		{
			int t=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=t;
			}	
		}
		counter++;
	}
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
