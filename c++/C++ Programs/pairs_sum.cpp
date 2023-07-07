#include<bits/stdc++.h>
using namespace std;
bool pairs_sum(int a[],int n,int k)
{int low=0;
int hig=n-1;
   while(low<hig){
   	if(a[low]+a[hig]==k)
   	{
   		cout<<low<<" "<<hig<<endl;
   		return true;
	   }
	   else if(a[low]+a[hig]<k)
	   {
	   	low++;
	   }
	   else{
	   	hig--;
        }
   }
   return false;
}
int main()
{
int n;
cout<<"enter the sizeof sortedarry\n";
cin>>n;

int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
	}	
	int k;
	cout<<"enter key\n";
	cin>>k;
	if(pairs_sum(a,n,k))
	{
		cout<<"true\n";
		
	}
	else
	{
		cout<<"false\n";
	}
	return 0;
}
