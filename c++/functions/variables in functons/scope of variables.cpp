#include<bits/stdc++.h>
using namespace std;
int g=10;//this can be exesed any where in the program.
int fun()
{

    g++;
    return g;
}
int main()

{
    int g=20;//this can only be exised only in the main function.
    {

        int g=30;//this only exisable till the }ends .
        cout<<g<<endl;
    }
    cout<<g<<endl;
    fun();
    cout<<::g<<endl;
    return 0;

}
