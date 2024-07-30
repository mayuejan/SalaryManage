/**
* File Name: Supervisor.h
* Academic Integrity Statement:
* I certify that, while others may have assisted me in brainstorming, debugging, and validating this program,
* the program itself is my own work. I understand that submitting code that is the work of other individuals
* is a violation of the course Academic Integrity Policy and may result in zero credit for the assignment, or
* course failure and a report to the Academic Dishonesty Board. I also understand that if I knowingly give my
* original work to another individual could also result in zero credit for the assignment, or course failure
* and a report to the Academic Dishonesty Board. See Academic Integrity for Students
Links to an external site.
*
* Assisted by and Assisted line numbers:
* Your Name: YUERAN MA
* Your PSU user ID:  ymm5252
* Course title (e.g. CMPSC122 Summer 2024
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