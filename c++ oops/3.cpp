// 3
// Create two classes DM and DB which store the value of distances.
//  DM stores distance in meters and centimetres and DB in feet and inches.
//   Write a program that can read values for the class objects and add one
//   object of DM with another object of DB. Use a friend function to carry out
//   the addition operation. The object that stores the results may be a DM object or
//    DB object, depending on the units in which the results are
// required. The display should be in the format of feet and inches or meters
// and centimetres depending on the object on display.

#include <iostream>
using namespace std;

class DB
{
     int feets;
     int inches;

public:
     int getFeet()
    {
        return feets;
    }
    void setB()
    {
        cout << "Enter the distance in feets and inches" << endl;
        cin >> feets >> inches;
    }
     int getInches()
    {
        return feets;
    }
};
class DM
{
     int meters;
     int centimetres;

public:
     int getMeters()
    {
        return meters;
    }
     int getCentimeters()
    {
        return centimetres;
    }
    void setM()
    {
        cout << "Enter the distance in meters and centimeters" << endl;
        cin >> meters >> centimetres;
    }
    friend void add(DB *a, DM *b);
};
void add(DB *a, DM *b)
{
     int c = a->getFeet() * 30.48 + a->getInches() * 2.54;
    b->meters += c / 100;
    b->centimetres +=c%100;
    cout << b->meters << " meters"
         << " \t" << b->centimetres << "centemeters" << endl;
}
int main()
{
    DM d1;
    DB d2;
    d1.setM();
    d2.setB();
    add(&d2, &d1);
    cout << d1.getMeters() << "\t" << d1.getCentimeters() << endl;
}
