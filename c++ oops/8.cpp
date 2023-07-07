// 8
// Write a C++ program to design a Student class representing USN and a Test class
// representing  the   scores  of   the  student  in   various   subjects   and   a   Sports  class
// 		representing the score in sports. The Sports and Test classes is inherited by Result
// class having the functionality to add the scores and display the final result of a student.
#include <iostream>
using namespace std;
class Student
{
    int usn;

public:
    void setUsn();
    int getUsn();
};

void Student::setUsn()
{
    cout << "Enter the usn" << endl;
    cin >> usn;
}
int Student::getUsn()
{
}
class Test : virtual public Student
{
protected:
    int test1, test2, test3;

public:
    void setTestscore()
    {
        cout << "Enter the sccore in three subjects" << endl;
        cin >> test1 >> test2 >> test3;
    }
};
class Sport : virtual public Student
{
protected:
    int sport1, sport2, sport3;

public:
    void setSportscore();
};
void Sport::setSportscore()
{
    cout << "Enter the score in three sports" << endl;
    cin >> sport1 >> sport2 >> sport3;
}
class Result : public Test, public Sport
{
    int total;
    double avg;

public:
    int getTolal();
    double getAvg();
};
int Result::getTolal()
{
    total = test1 + test2 + test3 + sport1 + sport3 + sport2;
    return total;
}
double Result::getAvg()
{
    avg = total / 6.0;
    return avg;
}
int main()
{
    Result r;
    r.setUsn();
    r.setTestscore();
    r.setSportscore();
    cout << "the student\t"
         << " usn :" << r.getUsn() << endl;
    cout << "Total :" << r.getTolal() << endl;
    cout << "Avg" << r.getAvg();
}