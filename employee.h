/*
* Interface for class Employee
*
* Date: 12/7/2022
* Author: Amparo Godoy Pastore
*/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

namespace employeeamparo
{
    class Employee
    {
    public:
        Employee();
        Employee(string the_name, string the_ssn);
        string get_name() const;
        string get_ssn() const;
        double get_net_pay() const;
        void set_name(string new_name);
        void set_ssn (string new_ssn);
        void set_net_pay(double new_net_pay);
        void print_check() const;

    protected:
        string name;
        string ssn;
        double net_pay;
    };
}

#endif // EMPLOYEE_H
