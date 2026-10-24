#pragma once
#include "Salaried.h"
#include <iostream>
class Manager: public Salaried
{	
	private:
	double bonus;
	public:
		Manager(std::string name, int id, double mBalance, double bonus);
		double calculatePay() const override;
		void display() const override;
		~Manager() override;

};