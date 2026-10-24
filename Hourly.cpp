#include "Hourly.h"
#include <iostream>
using namespace std;
Hourly::Hourly(string n, int id, int hWorked, float hRate)
	:Employee(n, id), hoursWorked{ hWorked }, hourlyRate{ hRate }{}
Hourly::~Hourly() {}

double Hourly::calculatePay() const
{
	if (hoursWorked > 40) {
		return ((hoursWorked - 40) * 1.5 * hourlyRate + 40 * hourlyRate);
	}
	else
		return hoursWorked * hourlyRate;

}
void Hourly::display() const
{
	cout << "Hourly    [" << getID() << "] " << getName()
		<< ": pay = " << calculatePay()
		<< " " << hoursWorked << " h"
}
Hourly::~Hourly() {};