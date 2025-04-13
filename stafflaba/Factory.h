#pragma once
#ifndef FACTORY_H
#define FACTORY_H
#include <string>
#include <vector>
#include <map>
#include "Personal.h"
#include "Employee.h"
#include "fstream"

#include <locale>
#include <codecvt>
//работа с цветовой палитрой
#define RESTORE "\033[0m"
#define BLUE "\033[36m"

class Factory {
public:
	virtual ~Factory() = default;
	void addEmployee(Employee* emp);
	Factory& operator+=(Employee* employee);
	void removeEmployee(Employee* emp);
	Factory& operator-=(Employee* employee);
	void display() const;
	std::vector<Employee*> get_staff() const;
	friend std::ostream& operator<<(std::ostream& os, const Factory& factory);
private:
	std::vector<Employee*> staff;
};

#endif // FACTORY_H
