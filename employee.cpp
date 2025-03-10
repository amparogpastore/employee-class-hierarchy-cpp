/*
* Implementation for class Employee
*
* Date: 12/7/2022
* Author: Amparo Godoy Pastore
*/
#include <string>
#include <cstdlib>
#include <iostream>
#include "employee.h"

using namespace std;

namespace employeeamparo
{
    //constructors
    Employee::Employee() : name("No name yet"), ssn("No number yet"), net_pay(0){}
    Employee::Employee(string the_name, string the_number) : name(the_name), ssn(the_number), net_pay(0){}
    //member functions
    string Employee::get_name() const
    {
        return name;
    }

    string Employee::get_ssn() const
    {
        return ssn;
    }

    double Employee::get_net_pay() const
    {
        return net_pay;
    }

    void Employee::set_name(string new_name)
    {
        name = new_name;
    }

    void Employee::set_ssn(string new_ssn)
    {
        ssn = new_ssn;
    }

    void Employee::set_net_pay(double new_net_pay)
    {
        net_pay = new_net_pay;
    }

    void Employee::print_check() const
    {
        cout << "\nERROR: print_check FUNCTION CALLED FOR AN \n"
             << "UNDIFFERENTIATED EMPLOYEE. Aborting the program. \n"
             << "Check with the author of the program about this bug. \n";
        exit(1);
    }
}
