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
    std::wcout << L"���������� � ���������:\n";
    std::cout << "-----------------------" << std::endl;
    std::cout << "  ID: " << get_id() << "\n";
    std::wcout << L"  ���: " << fullname << "\n"
        << L"  ��������: " << payment << L" ���.\n"
        << L"  ���������: "; std::cout << get_position() << "\n";
    std::wcout << L"  ����� � �������: "; std::cout << part << "\n";
    std::cout << "- - - - - - - - - - - -" << std::endl << std::endl;
}

ProjectManager::ProjectManager(int id, std::wstring fullname, Positions position) :
    Manager(id, fullname, position) {
}

SeniorManager::SeniorManager(int id, std::wstring fullname, Positions position) : 
    Manager(id, fullname, position) {
}