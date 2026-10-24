#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager(string name, int id, double monthlySalary, double bonus)
    : Salaried(name, id, monthlySalary), bonus{ bonus } {
}

Manager::~Manager() {}

double Manager::calculatePay() const {
    return monthlySalary + bonus;        // monthlySalary is protected in Salaried
}

void Manager::display() const {
    cout << "Manager   [" << getID() << "] " << getName()
        << ": pay = " << calculatePay()
        << " (salary " << monthlySalary << " + bonus " << bonus << ")" << endl;
}