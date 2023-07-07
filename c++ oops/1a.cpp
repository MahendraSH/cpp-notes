// #include <iostream>
// #include <stdlib.h>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     bool f = true;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             f = false;
//             cout << "not a prime" << endl;
//             return 0;
//         }
//     }
//     if (f)
//     {
//         cout << "prime" << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// class stack
// {
//     int *a;
//     int maxSize;
//     int top;
//     public:
//     stack();
//     friend ostream& operator <<(ostream &out,stack &s);
//     friend stack& operator +(stack &s,int n)
//     {
//      if(s.top==-1)
//      return s;
//      s.top++;
//      s.a[s.top]=n;

//     }
// };
// stack::stack()
// {
//     top=-1;
//     maxSize=10;
//     a=new int [maxSize];
// }
// ostream & operator <<(ostream & out,stack &s)
// {
//     for(int i=0;i<s.top;i++)
//     out<<s.a[i]<<" "
// }



// int main()
// {
    
// }