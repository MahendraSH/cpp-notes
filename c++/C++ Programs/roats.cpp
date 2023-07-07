//ax2+bx+c=0;
#include<bits\stdc++.h>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"enter the the a,b,c in quardratic equation\nax2+bx+c=0\n";
	cin>>a>>b>>c;
	float roat1=(-b+sqrt((b*b)-(4*a*c)));
		float roat2=(-b-sqrt((b*b)-(4*a*c)));
		roat1/=(2*a);
		roat2/=(2*a);
	cout<<roat1<<" "<<roat2<<endl;
	if(roat1)
	{
		cout<<"imaginary\n";
	}
	
	return 0;
}
