/*
* /**
* File Name: Manager.h
*
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
* Course title: CMPSC122 Summer 2024
* Description: This header file defined manager class, which was inherits from employee

 * File: manager.h
 * Manager class definition.  Manager inherits from Employee.
 * In its class definition, we must list those things that
 * are new in Manager (i.e., that are not inherited from
 * Employee) and those things which we will redefine for a
 * Manager.
 */

#ifndef _MANAGER_H
#define _MANAGER_H

#include "Employee.h"

class Manager : public Employee {
public:
  Manager(string theName,
          float thePayRate,
          bool isSalaried);
  bool getSalaried()const;
  void setSalaried(bool isSalaried);
  // Redefine how pay is calculated.
 float pay(float hoursWorked) const override;
 void print() const override;
 
private:
  bool salaried;
};

Manager::Manager(string theName,
    float thePayRate,
    bool isSalaried)
    : Employee(theName, thePayRate), salaried(isSalaried) {}
bool Manager::getSalaried()const {
    return salaried;
}
void Manager::setSalaried(bool isSalaried)
{
  salaried = isSalaried;
}


float Manager::pay(float hoursWorked) const
{
    if (salaried){
        return getPayRate();
}else {

    return getPayRate() * hoursWorked;
}
}
void Manager::print()const {
    Employee::print();
    cout << "Is salaried?" << (salaried ? "Yes" : "No") << endl;
}
#endif /* not defined _MANAGER_H */
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