#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key)
{
	for(int i=1;i<=n;i++)
	{
		if(key==arr[i])
		return i;
	}
	return -1;
}
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"enter a key\n";
	cin>>key;
	cout<<linearSearch(arr,n,key)<<endl;
	return 0;
}
