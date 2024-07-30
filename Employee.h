/**
* File Name: Employee.h
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
* Description: This is a skeleton codes for employee class definition
 * File: Employee.h
 * Skeleton codes for Employee class definition.
 */

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
#include<iostream>
#include <string>
using namespace std;

class Employee {
public:
  Employee(string theName, float thePayRate);

  string getName() const;
  float getPayRate() const;

  void setName(string theName);
  void setPayRate(float thePayRate);

  virtual float pay(float hoursWorked) const;
  virtual void print()const;
private:
  string name;
  float payRate;
};

Employee::Employee(string theName, float thePayRate) :name(theName), payRate(thePayRate) {}
string Employee::getName()const {
return name;
}
float Employee::getPayRate()const {
return payRate;
}

void Employee::setName(string theName) {
name = theName;
}
void Employee::setPayRate(float thePayRate){
  payRate = thePayRate;
}





float Employee::pay(float hoursWorked) const
{
  return payRate*hoursWorked;
}
void Employee::print()const {
cout << "Name: " << name << endl;
cout << "Pay Rate: " << payRate << endl;
}

#endif /* not defined _EMPLOYEE_H */
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