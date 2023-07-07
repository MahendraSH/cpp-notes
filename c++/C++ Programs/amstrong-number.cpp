#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter  a number  \n";
	 cin>>n;
	 int sum=0;
	 int originaln=n;
	 while(n>0)
	 {
	 	int last=n%10;
	 	sum=sum+pow(last,3);
	 	n=n/10;
	 }
	 if(sum==originaln)
	 {
	 	cout<<"amstrong number \n";
	 }
	 else
	 {
	 	cout<<"not an amstrong number\n";
	 }
	 return 0;
}
