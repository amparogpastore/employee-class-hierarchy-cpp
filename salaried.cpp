/*
* Implementation for class SalariedEmployee
*
* Date: 12/7/2022
* Author: Amparo Godoy Pastore
*/
#include <iostream>
#include <string>
#include "employee.h"
#include "salaried.h"

using namespace std;

namespace employeeamparo
{
    //constructors
    SalariedEmployee::SalariedEmployee() : Employee(), salary(0){}
    SalariedEmployee::SalariedEmployee(string the_name, string the_number, double the_weekly_salary) : Employee(the_name, the_number), salary(the_weekly_salary){}

    double SalariedEmployee::get_salary() const
    {
        return salary;
    }
    void SalariedEmployee::set_salary(double new_salary)
    {
        salary = new_salary;
    }
    void SalariedEmployee::print_check()
    {
        set_net_pay(salary);
        cout << "\n_______________________________________________\n";
        cout << "Pay to the order of " << get_name() << endl;
        cout << "The sum of " << get_net_pay() << " Dollar\n";
        cout << "_______________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Employee Number: " << get_ssn() << endl;
        cout << "Salaried Employee. Regular Pay: "
             << salary << endl;
        cout << "_______________________________________________\n";
    }
    void SalariedEmployee::input_data()
    {
        cout << "\nName: ";
        getline(cin, name);
        cout << "SSN: ";
        getline(cin, ssn);
        cout << "Salary: $";
        cin >> salary;
        getchar();
    }

    void SalariedEmployee::print() const //outputs the objects data to the screen
    {
        cout << "\nSalaried employee's data\n"
        "Name: " << name << endl <<
        "SSN: " << ssn << endl <<
        "Salary: $" << salary << endl;
    }

}
