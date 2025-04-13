#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include <vector>

enum Positions {
    unemployed,
    programmer,
    tester,
    team_leader,
    project_manager,
    senior_manager, 
};

class Employee {
public:
    virtual ~Employee() = default;
    Employee(int id, std::wstring fullname, Positions position);
    int get_id() const;
    std::wstring get_fullname() const;
    std::string get_position() const;
    int get_payment() const;
    virtual void calc() = 0;
    virtual void print_info() const = 0;
    bool operator==(const Employee& another) const;
    bool operator!=(const Employee& another) const;
private:
    int id;
    std::vector<std::string> positions = {
      "unemployed",
      "programmer",
      "tester",
      "team_leader",
      "project_manager",
      "senior_manager",
    };
protected:
    std::wstring fullname;
    Positions position;
    int payment;  
};

#endif //EMPLOYEE_H
