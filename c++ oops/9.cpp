// 9.	CO3	Write a C++ program to create a class called STUDENT with data members
//  USN, Name and Age. Using inheritance, create the classes UGSTUDENT and PGSTUDENT
//  having fields as Semester, Fees and Stipend. Enter the data for at least 5
// students from UG and PG. Find the average age for all UG and PG students separately.

#include <iostream>
using namespace std;
class Student
{
protected:
    int usn;
    string name;
    int age;

public:
    virtual void set()
    {
        cout << "Enter the name , usn and age of student" << endl;
        cin >> name >> usn >> age;
    }
    int getage()
    {
        return age;
    }
};
class UGStudent : public Student
{
private:
    int sem;
    int free;
    int stipend;

public:
    void set()
    {
        cout << "Enter the name ,usn and age of ug student" << endl;
        cin >> name >> usn >> age;
        cout << "Enter the sem, free and stipend  of ug student" << endl;
        cin >> sem >> free >> stipend;
    }
    void display()
    {
        cout << "UGStudent name -" << name << "\t "
             << "usn -" << usn
             << "\t age -" << age << endl;
        cout << " sem -" << sem << "\t"
             << "free -" << free << "\t "
             << "stipend -" << stipend << endl;
    }
};
class PGStudent : public Student
{
private:
    int sem;
    int free;
    int stipend;

public:
    void set()
    {

        cout << "Enter the name ,usn and age of pg student" << endl;
        cin >> name >> usn >> age;
        cout << "Enter the sem, free and stipend  of pg student" << endl;
        cin >> sem >> free >> stipend;
    }
    void display()
    {
        cout << "PGStudent name -" << name << "\t "
             << "usn -" << usn
             << "\t age -" << age << endl;
        cout << " sem -" << sem << "\t"
             << "free -" << free << "\t "
             << "stipend -" << stipend << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    UGStudent *u = new UGStudent[n];
    PGStudent *p = new PGStudent[n];
    cout << "Enter ug students info" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << endl;

        u->set();
    }
    cout << "Enter the pg student info" << endl;
    for (int i = 0; i < n; i++)
    {
        p->set();
    }
    cout << "UG Student info" << endl;
    for (int i = 0; i < n; i++)
    {
        u->display();
        cout << "_______________" << endl;
    }
    cout << "==============================" << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p->getage();
    }
    sum /= n;
    cout << "+++++++++++" << endl;
    cout << "pG avg age=" << sum << endl;
    cout << "PG Student info" << endl;
    for (int i = 0; i < n; i++)
    {
        u->display();
        cout << "_______________" << endl;
    }
    cout << "==============================" << endl;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p->getage();
    }
    sum /= n;
    cout << "pG avg age=" << sum << endl;
}