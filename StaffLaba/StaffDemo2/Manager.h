#pragma once
#include "Interfaces.h"
#include "Employee.h"
#include "Factory.h"

class Manager : public Employee, public Project_Budget {
public:
    virtual ~Manager() = default;
    Manager(int id, std::wstring fullname, Positions position);
    void calc() override;
    int calc_budget_part(float part) override;
    void print_info() const override;
protected:
    float part = 0.0;
};


class ProjectManager : public Manager {
public:
    virtual ~ProjectManager() = default;
    ProjectManager(int id, std::wstring fullname, Positions position);
};

class SeniorManager : public Manager {
public:
    virtual ~SeniorManager() = default;
    SeniorManager(int id, std::wstring fullname, Positions position);
};

