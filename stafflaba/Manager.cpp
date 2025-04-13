#include "Manager.h"

Manager::Manager(int id, std::wstring fullname, Positions position)
    : Employee(id, fullname, position) {
}

int Manager::calc_budget_part(float part) {
    this->part = part;
    return project_budget * part;
}

void Manager::calc() {
    payment = calc_budget_part(part);
}

void Manager::print_info() const {
    std::cout << "-----------------------" << std::endl;
    std::wcout << L"Информация о работнике:\n";
    std::cout << "-----------------------" << std::endl;
    std::cout << "  ID: " << get_id() << "\n";
    std::wcout << L"  ФИО: " << fullname << "\n"
        << L"  Зарплата: " << payment << L" руб.\n"
        << L"  Должность: "; std::cout << get_position() << "\n";
    std::wcout << L"  Часть в проекте: "; std::cout << part << "\n";
    std::cout << "- - - - - - - - - - - -" << std::endl << std::endl;
}

ProjectManager::ProjectManager(int id, std::wstring fullname, Positions position) :
    Manager(id, fullname, position) {
}

SeniorManager::SeniorManager(int id, std::wstring fullname, Positions position) : 
    Manager(id, fullname, position) {
}