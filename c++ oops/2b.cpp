// b) A phone number, such as (044) 234-8900, can be thought of as
//  having three parts: the area code (044), the exchange (234) and the number (8900).
//   Write a program that uses a class to store these three parts of a phone number separately. Call the class phone.
//  Create two class objects of type phone. Initialize one, and have the
// user input a number for the other one. Display both the numbers.

#include <iostream>
using namespace std;
class PhoneNumber
{
    int areaCode;
    int exchange;
    int number;

public:
    PhoneNumber()
    {
        areaCode = 044;
        exchange = 234;
        number = 8900;
    }
    void set();

    void get();
};
int main()
{
    PhoneNumber p1, p2;
    p2.set();
    p1.get();
    p2.get();
}
void PhoneNumber::set()
{
    cout << "Enter the  area code" << endl;
    cin >> areaCode;

    cout << "Enter exchange number " << endl;
    cin >> exchange;

    cout << "Enter the number " << endl;
    cin >> number;
}
void PhoneNumber::get()
{
    cout << "(" << areaCode << ")"
         << " " << exchange << "-" << number << endl;
}