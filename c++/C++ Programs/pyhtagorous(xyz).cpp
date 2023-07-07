#include<bits/stdc++.h>
using namespace std;
 bool pythogorin(int x,int y,int z)
 {
 	int b,c;
 	int a=max(x, max(y,z));
 	{
 		if(a==x)
 		{
 			 b=y;
 			 c=z;
		 }
		 else if  (a==y)
		 {
		 	b=x;
		 	c=z;
		 }
		 else
		 {
		 	b=x;
		 	c=y;
		 }
		 if(a*a==b*b+c*c)
		 {
		 	return true;
		 }
		 else
		 {
		 	return false;
		 }
	 }
 }
int main()
{
	int x,y,z;
	cout<<"enter a set of three numbers \n";
	cin>>x>>y>>z;
   if	(pythogorin(x,y,z))
   {
   	cout<<"pythogorin triplet\n";
   }
   else
   {
   	cout<<"not a pythogorin triplet\n";
   }
   return 0;
}
