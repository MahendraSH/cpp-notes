//pokectmoney and day out.
#include<iostream>
using namespace std;
int main()
{
	int pokectmoney;
	cout<<"enter pokect money \n";
	cin>>pokectmoney;
	for(int date =1;date <=30;date++)
	{pokectmoney=pokectmoney-300;
	  if(pokectmoney!=0){
		cout<<"go out today"<<date<<endl;
     	}
     	else
    	{
		break;
     	}
	}
	return 0;
}
