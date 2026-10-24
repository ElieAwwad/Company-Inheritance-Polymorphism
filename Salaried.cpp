#include "Salaried.h"
#include <iostream>
using namespace std;
Salaried::Salaried(string name, int id, double mBalance)
	:Employee::Employee(name, id), monthlySalary{ mBalance }{}
Salaried::~Salaried() {}
double Salaried::calculatePay() const
{
	return monthlySalary;
}
void Salaried::display() const
{
	cout << " Salaried name is " << getName() << " \nMonthly Salary is" << calculatePay();
}

