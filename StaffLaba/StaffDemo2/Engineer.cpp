#include "Engineer.h"
#include "Factory.h"

Engineer::Engineer(int id, std::wstring fullname, int work_time, int salary, Positions position) :
    Personal(id, fullname, work_time, salary, position) {}

void Engineer::calc() {
    payment = calc_base_salary(salary, work_time) + calc_budget_part(part);
}

int Engineer::calc_budget_part(float part) {
    this->part = part;
    return project_budget * part;
}

void Engineer::print_info() const {
    std::cout << "-----------------------" << std::endl;
    std::cout << "Информация о работнике:\n";
    std::cout << "-----------------------" << std::endl;
    std::cout << "  ID: " << get_id() << "\n";
    std::wcout << L"  ФИО: " << fullname << "\n"
        << L"  Оклад: " << salary << L" руб.\n"
        << L"  Рабочее время: " << work_time << L" ч.\n"
        << L"  Зарплата: " << payment << L" руб.\n"
        << L"  Должность: "; std::cout << get_position() << "\n";
    std::wcout << L"  Часть в проекте: "; std::cout << part << "\n";
    std::cout << "- - - - - - - - - - - -" << std::endl << std::endl;
}



Tester::Tester(int id, std::wstring fullname, int work_time, int salary, Positions position) :
    Engineer(id, fullname, work_time, salary, position) {
}


void Tester::calc() {
    payment = calc_base_salary(salary, work_time) + calc_budget_part(part) + calc_bonus_salary(edits);
}


Programmer::Programmer(int id, std::wstring fullname, int work_time, int salary, Positions position) :
    Engineer(id, fullname, work_time, salary, position) {
}


void Programmer::calc() {
    payment = calc_base_salary(salary, work_time) + calc_budget_part(part) + calc_bonus_salary(problems);
}


TeamLeader::TeamLeader(int id, std::wstring fullname, int workTime, int salary, Positions position) :
    Programmer(id, fullname, workTime, salary, position) {
}

void TeamLeader::calc() {
    payment = calc_base_salary(salary, work_time) + calc_budget_part(part);
}
