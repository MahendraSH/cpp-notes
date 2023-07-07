#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int* b)
{
    int temp=*a ;
    *a=*b;
   * b=temp;

    return ;
}
int main()
{
    int x=10,y=20;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
