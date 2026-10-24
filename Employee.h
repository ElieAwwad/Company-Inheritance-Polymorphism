#pragma once
#include <iostream>
class Employee
{
private:
	std::string name;
	int ID;
public:
	Employee(std::string n="", int id=0);
	virtual double calculatePay() const = 0;
	virtual void display() const = 0;
	std::string getName() const;
	int getID() const;
	virtual ~Employee();
};