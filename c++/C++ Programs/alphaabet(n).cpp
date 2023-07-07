#include<iostream>
using namespace std;
void alphabet(char c)
{
	if('z'<=c>='a'||'Z'<=c>='A')
	{
		cout<<"it is an alphabet\n";
	}
	else
	{
		cout<<"it is not an alphabet\n";
	}
	return ;
}
int main()
{
	char c;
	cout<<"enter a key\n";
	cin>>c;
	alphabet(c);
	return 0;
}
