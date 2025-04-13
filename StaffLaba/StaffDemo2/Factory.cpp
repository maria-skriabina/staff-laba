#include "Factory.h"
#include "Employee.h"
#include "Engineer.h"
#include "Manager.h"
#include "Personal.h"
#include "Interfaces.h"



void Factory::addEmployee(Employee* emp) {
    staff.push_back(emp);
}

Factory& Factory::operator+=(Employee* emp) {
    addEmployee(emp);
    return *this;
}


void Factory::removeEmployee(Employee* emp) {
    std::vector<Employee*>::iterator it = std::find(staff.begin(), staff.end(), emp);
    if (it != staff.end()) {
        staff.erase(it);
    }
    else {
        std::cout << "Employee not found in factory." << std::endl;
    }
}

Factory& Factory::operator-=(Employee* emp) {
    removeEmployee(emp);
    return *this;
}


void Factory::display() const {
    if (staff.empty()) {
        std::cout << "Factory is empty.";
    }
    else {
        for (Employee* emp : staff) {
            emp->print_info();
        }
    }
    std::cout << std::endl;
}

std::vector<Employee*> Factory::get_staff() const {
    return (this == nullptr || staff.empty()) ? std::vector<Employee*>() : staff;
}


std::ostream& operator<<(std::ostream& os, const Factory& factory) {
    if (factory.staff.empty()) {
        os << "Factory is empty.";
    }
    else {
        for (Employee* emp : factory.staff) {
            emp->print_info();
        }
    }
    std::cout << std::endl;
    return os;
}