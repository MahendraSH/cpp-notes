//decimalTOoctal
#include<iostream>
using namespace std;
int decimalTObynary(int n)
{
	int ans=0;
	int x=1;
	while(x<=n)
	
		x*=2;
		x/=2;
	
	while(x>0)
	{
		int lastdigit=n/x;
		ans=ans*10+lastdigit;
		n=n-x*lastdigit;
		x=x/2;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"enter a number \n";
	cin>>n;
	int ans =decimalTObynary(n);
	cout<<ans<<endl;
	return 0;
}
