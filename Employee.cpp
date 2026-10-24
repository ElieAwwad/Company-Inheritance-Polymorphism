#include "Employee.h"
#include <iostream>
using namespace std;
Employee::Employee(string n, int id)
	:name{ n }, ID{ id } {}

Employee::~Employee() {}

string Employee::getName() const
{
	return name;
}
int Employee::getID() const
{
	return ID;
}
void Employee::display() const 
{
	cout << "Employee name is" << getName() << " Employee ID is" << getID() << endl;
}
