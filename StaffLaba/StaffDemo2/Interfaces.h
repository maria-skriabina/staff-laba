#pragma once
#ifndef INTERFACES_H
#define INTERFACES_H

const int project_budget = 10000000;

class Work_Base_Time {
public:
    virtual ~Work_Base_Time() = default;
    virtual int calc_base_salary(int salary, int work_time) = 0;
    virtual int calc_bonus_salary(int bonus) = 0;
};

class Project_Budget {
public:
    virtual ~Project_Budget() = default;
    virtual int calc_budget_part(float part) = 0;
};

#endif  // INTERFACES_H
