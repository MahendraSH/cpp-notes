// 7
// Write a C++ program to read and print Employee information
//  (name, empID, gender) with Department (deptName, workAssigned)
//   and with Loan information (loanDetails, loanAmt)
//   using hierarchical inheritance.

#include <iostream>
using namespace std;
class Employ
{
    int empID;
    string name;
    string gender;

public:
    void setEmpInfo();
    int getEmpID();
    string getName();
    string getGender();
};
int Employ::getEmpID()
{
    return empID;
}
string Employ::getGender()
{
    return gender;
}
string Employ::getName()
{
    return name;
}
void Employ::setEmpInfo()
{
    cout << "Enter the name ,empid and gender";
    cin >> name >> empID >> gender;
}
class DepartmentInfo : public Employ
{
    string DepName;
    string work;

public:
    void setDepartmentInfo();
    string getDepName();
    string getWork();
};
string DepartmentInfo::getDepName()
{
    return DepName;
}
string DepartmentInfo::getWork()
{
    return work;
}

void DepartmentInfo::setDepartmentInfo()
{
    cout << "Enter the Department name and work info" << endl;
    cin >> DepName >> work;
    return;
}
class LoanInfo : public DepartmentInfo
{
    int amount;
    string loanDetils;

public:
    void setLoanInfo();
    string getLoanDetils();
    int getAmout();
};
void LoanInfo::setLoanInfo()
{
    cout << "Enter the loan details and loan amount" << endl;
    cin >> loanDetils >> amount;
}
int LoanInfo::getAmout()
{
    return amount;
}
string LoanInfo::getLoanDetils()
{
    return loanDetils;
}

int main()
{
    LoanInfo a;
    a.setEmpInfo();
    a.setDepartmentInfo();
    a.setLoanInfo();
    cout << "---------------------" << endl;
    cout << "Employ info" << endl;
    cout << "Name ::" << a.getName() << "\t";
    cout << "EmID ::" << a.getEmpID() << "\t";
    cout << "Gender ::" << a.getGender() << "\t";
    cout << endl
         << "Department info " << endl;
    cout << "Department name ::" << a.getDepName() << "\t";
    cout << "work assigned ::" << a.getWork() << "\t" << endl;
    cout << "Loan info" << endl;
    cout << "Loan for:: " << a.getLoanDetils() << " \t";
    cout << "Amount:: " << a.getAmout();
    return 0;
}
