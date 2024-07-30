/**
* File Name: Supervisor.h
* Description: Defined and implemmented supervisor class, which inherits many other classes.
**/
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Manager.h"//colaboration with root file

class Supervisor : public Manager {
public:
    Supervisor(string theName, float thePayRate, bool isSalaried, string dept, float bonusPay);
    string getDepartment() const;
    float getBonusPay() const;
    void setDepartment(string dept);
    void setBonusPay(float bonusPay);
    float pay(float hoursWorked) const override;
    void print() const override;

private:
    string department;
    float bonusPay;
};

// Implementation of Supervisor methods
Supervisor::Supervisor(string theName, float thePayRate, bool isSalaried, string dept, float bonusPay)
    : Manager(theName, thePayRate, isSalaried), department(dept), bonusPay(bonusPay) {}

string Supervisor::getDepartment() const {
    return department;
}

float Supervisor::getBonusPay() const {
    return bonusPay;
}

void Supervisor::setDepartment(string dept) {
    department = dept;
}

void Supervisor::setBonusPay(float bonusPay) {
    bonusPay = bonusPay;
}

float Supervisor::pay(float hoursWorked) const {
    return getPayRate() + bonusPay;
}

void Supervisor::print() const {
    Manager::print();
    cout << "Department: " << department << endl;
    cout << "Compensation: " << bonusPay << endl;
}

#endif
/*Sample output:
Name: Cassie
Pay Rate: 1000
Is salaried?Yes
Department: Accounting
Compensation: 250
Pay: 1250

The employee information and payments after the updates:

Name: Alexander
Pay Rate: 50
Pay: 3000

Name: Elizabeth
Pay Rate: 1500
Is salaried?Yes
Pay: 1500

Name: Cassandra
Pay Rate: 1500
Is salaried?Yes
Department: Accounting
Compensation: 250
Pay: 1750
*/
