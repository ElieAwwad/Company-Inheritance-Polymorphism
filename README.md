# Company-Inheritance-Polymorphism
# Company: Inheritance and Polymorphism

A C++ console project that models a company payroll system to practice **inheritance** and **polymorphism**.

## What I Used

- **Language:** C++ (C++20)
- **IDE:** Visual Studio 2022
- **Standard library:** `<iostream>`, `<iomanip>`, `<string>`, `<vector>`, `<memory>`
- **OOP concepts:**
  - Abstract base class
  - Inheritance (single and multilevel)
  - Virtual functions and `override`
  - Virtual destructors
  - Encapsulation (`private` / `protected` / `public`)
- **Smart pointers:** `std::unique_ptr`, `std::make_unique`, `std::move`
- **Containers:** `std::vector`
- **Formatting:** `std::fixed` and `std::setprecision` for money output
- **Project layout:** header files (`.h`) for declarations, source files (`.cpp`) for implementations, and one `main.cpp`

## Class Hierarchy

```
Employee (abstract)
├── Salaried
│   └── Manager
└── Hourly
