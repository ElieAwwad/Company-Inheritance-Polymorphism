#include "Company.h"
#include <iostream>
using namespace std;

Company::Company(string name) : name(name) {}

void Company::add_employee(unique_ptr<Employee> e){
    employees.push_back(std::move(e));
}

void Company::payroll() const {
    double total = 0;
    for (const auto& e : employees) {
        e->display();                    // polymorphic call
        total += e->calculatePay();
    }
    cout << "-------------------------------------" << endl;
    cout << "Total payroll for " << name << ": " << total << endl;
}

