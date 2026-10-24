#include <iostream>
#include <iomanip>
#include "Company.h"
#include "Salaried.h"
#include "Hourly.h"
#include "Manager.h"
using namespace std;

int main() {
    cout << fixed << setprecision(2);

    Company c("TechCorp");
    c.add_employee(make_unique<Salaried>("Rita", 101, 3000));
    c.add_employee(make_unique<Salaried>("Nadia", 102, 3500));
    c.add_employee(make_unique<Hourly>("Omar", 103, 40, 30));
    c.add_employee(make_unique<Hourly>("Lina", 104, 45, 30));
    c.add_employee(make_unique<Manager>("Sami", 105, 4500, 1000));

    c.payroll();
    return 0;
}