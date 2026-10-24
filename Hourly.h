#pragma once
#include "Employee.h"
#include <iostream>
class Hourly:public Employee
{
private:
	int hoursWorked;
	float hourlyRate;
public:
	Hourly(std::string n , int id, int hWorked, float hRate );
	double calculatePay() const override;
	void display() const override;
    ~Hourly() override;
};