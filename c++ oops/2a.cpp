// 2.a) Convert time from HH:MM:SS format to seconds using class in C++.

#include <iostream>
using namespace std;
int main()
{
    int h, min, sec;
    cin >> h >> min >> sec;
    cout << h * 3600 + min * 60 + sec << endl;
}