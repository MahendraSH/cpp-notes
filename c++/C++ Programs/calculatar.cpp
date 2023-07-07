//adding ,substration,multiplication,division.
#include <iostream>
using namespace std;
int main()
{
	float a,b;
	char op;
	cout<<"enter a symbole \n";
	cin>>op;
	cout<<"enter two numbers \n";
	cin>>a>>b;
	switch(op)
	{
		case '+':
		cout<<"sum="<<a+b<<endl;
		break;
		
		case '-':
		cout<<"difference="<<a-b<<endl;
		break;
		
		case '*':
		cout<<"result="<<a*b<<endl;
		break;
		
		case '/':
		cout<<"result="<<a/b<<endl;
		break;
		

	}
	return 0;
}
