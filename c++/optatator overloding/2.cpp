# include<iostream>
using namespace std;

/*program for operator overloading using friend functions

*/
class com
{
private:
	int real;
	int img;
public:
	com(int r=0,int i=0)
	{
	      real=r;
	      img=i;
	}
	void display()
	{
		cout<<real<<"+i"<<img<<endl;
	}
	friend ostream & operator<<(ostream &out,com &c);

};
ostream & operator<<(ostream &out,com &c)
{
	out<<c.real<<"+i"<<c.img<<endl;
	return out;
}
int main()
{
	com c(10,5);
	cout<<c;
	operator<<(cout,c);
}


