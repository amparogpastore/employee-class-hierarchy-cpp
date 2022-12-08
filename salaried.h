/*
* Interface for class SalariedEmployee
*
* Date: 12/7/2022
* Author: Amparo Godoy Pastore
*/
#ifndef SALARIED_H
#define SALARIED_H
#include "employee.h"
#include <string.h>

using namespace std;

namespace employeeamparo
{
    class SalariedEmployee : public Employee
    {
    public:
        SalariedEmployee();
        SalariedEmployee(string the_name, string the_ssn, double the_weekly_salary);
        double get_salary() const;
        void set_salary(double new_salary);
        void input_data();
        void print() const;
        void print_check();

    protected:
        double salary;
    };
}

#endif // SALARIED_H
