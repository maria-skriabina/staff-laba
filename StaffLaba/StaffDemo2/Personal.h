#pragma once
#ifndef PERSONAL_H
#define PERSONAL_H
#include <iostream>
#include <string>
#include "Employee.h"
#include "Interfaces.h"

class Personal : public Employee, public Work_Base_Time, public Project_Budget {
public:
	virtual ~Personal() = default;
	Personal(int id, std::wstring fullname, int work_time, int salary, Positions position);
	int calc_base_salary(int salaryValue, int worktimeValue) override;
	int calc_bonus_salary(int bonus = 0) override;
	int calc_budget_part(float part = 0) override;
	virtual void print_info() const = 0;
protected:
	int work_time;
	int salary;
};

#endif // PERSONAL_H
