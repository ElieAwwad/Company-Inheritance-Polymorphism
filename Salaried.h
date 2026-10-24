#pragma once
#include "Employee.h"
#include <iostream>
class Salaried:public Employee
{
protected:
	double monthlySalary;

public:
	Salaried(std::string name, int id, double mBalance);
	double calculatePay() const override;
    void display() const override;
    ~Salaried()override;

};