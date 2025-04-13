#pragma once
#ifndef ENGINEER_H
#define ENGINEER_H
#include <iostream>
#include <string>
#include "Personal.h"
#include "Interfaces.h"
#include "Factory.h"

class Engineer : public Personal {
public:
    virtual ~Engineer() = default;
    Engineer(int id, std::wstring fullname, int work_time, int salary, Positions position);
    void calc();
    int calc_budget_part(float part) override;
    void print_info() const;
protected:
    float part = 0.0;
};

class Tester : public Engineer {
public:
    virtual ~Tester() = default;
    Tester(int id, std::wstring fullname, int work_time, int salary, Positions position);
    void calc() override;
protected:
    int edits = 0;
};

class Programmer : public Engineer {
public:
    virtual ~Programmer() = default;
    Programmer(int id, std::wstring fullname, int work_time, int salary, Positions position);
    void calc() override;
protected:
    int problems = 0;
};

class TeamLeader : public Programmer {
public:
    virtual ~TeamLeader() = default;
    TeamLeader(int id, std::wstring fullname, int work_time, int salary, Positions position);
    void calc() override;
};

#endif //ENGINEER_H
