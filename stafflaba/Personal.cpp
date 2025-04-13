#include "Personal.h"

Personal::Personal(int id, std::wstring fullname, int work_time, int salary, Positions position) :
	Employee(id, fullname, position) {
	this->work_time = work_time;
	this->salary = salary;
}

int Personal::calc_base_salary(int salaryValue, int worktimeValue) {
	return salaryValue * worktimeValue;
}

int Personal::calc_bonus_salary(int bonus) {
	return calc_base_salary(salary, bonus);
}

int Personal::calc_budget_part(float part) {
	return project_budget * part;
}
