#pragma once
#include <string>
#include <vector>
#include "Employee.h"

class Company {
private:
    std::string name;
    std::vector<std::unique_ptr<Employee>> employees;
public:
    Company(std::string name = "");
    void add_employee(std::unique_ptr<Employee> e);
    void payroll() const;
    ~Company();
};