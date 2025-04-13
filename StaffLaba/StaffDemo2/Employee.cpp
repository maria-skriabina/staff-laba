#include "Employee.h"

Employee::Employee(int id, std::wstring fullname, Positions position) :
    id(id), fullname(fullname), position(position) {}


int Employee::get_id() const {
    return (this != nullptr) ? id : -1;
}

int Employee::get_payment() const {
    return (this != nullptr) ? payment : -1;
}

std::wstring Employee::get_fullname() const {
    return (this != nullptr) ? fullname : L"-";
}

std::string Employee::get_position() const {
    switch (position) 
    {
    case Positions::programmer: return "programmer";
    case Positions::team_leader: return "team_leader";
    case Positions::project_manager: return "project_manager";
    case Positions::senior_manager: return "senior_manager";
    case Positions::tester: return "tester";
    case Positions::unemployed: return "unemployed";
    }
}

bool Employee::operator==(const Employee& another) const {
    return position == another.position;
}

bool Employee::operator!=(const Employee& another) const {
    return position != another.position;
}

