//laptop based on savings
#include<iostream>
using namespace std ;
int main()
{
	long long int savings;
	cout<<"enter the savings \n";
	cin>>savings;
	if (savings>=50000)
	{
		if(savings>=70000)
		{
			cout<<"dell\n";
		}
		else
		{
			if(savings >=100000)
			{
				cout<<"apple i8 mac book pro\n";
			}
			else if (savings>90000)
			{
				cout<<"apple i8 mac book air \n";
			}
			else
			{
				cout<<"dell \ apple i5\n";
			}
		}
	}
	else if(savings>=30000)
	{
		cout<<"hp\n";
	}
	else if(savings >=20000)
	{
		cout<<" computer \n";
	}
	else
	{
		cout<<"collect more \n";
	}
	return 0;
}
