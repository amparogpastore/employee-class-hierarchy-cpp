/*
* Implementation for class Administrator
*
* Date: 12/7/2022
* Author: Amparo Godoy Pastore
*/
#include <iostream>
#include <string>
#include "employee.h"
#include "salaried.h"
#include "administrator.h"

using namespace std;

namespace employeeamparo
{
    void Administrator::set_division(string new_div)
    {
        division = new_div;
    }

    string Administrator::get_division()
    {
        return division;
    }
    void Administrator::input_data() //reading in an administrator's data from the keyboard
    {
        cout << "\nName: ";
        getline(cin, name);
        cout << "SSN: ";
        getline(cin, ssn);
        cout << "Title: ";
        getline(cin, title);
        cout << "Division: ";
        getline(cin, division);
        cout << "Salary: $";
        cin >> salary;
        getchar();
    }

    void Administrator::print() const //outputs the objects data to the screen
    {
        cout << "\nAdministrator's data\n"
        "Name: " << name << endl <<
        "SSN: " << ssn << endl <<
        "Title: " << title << endl <<
        "Division: " << division << endl <<
        "Salary: $" << salary << endl;
    }

    void Administrator::print_check()
    {
        set_net_pay(salary);
        cout << "\n_______________________________________________\n";
        cout << "Pay to the order of " << get_name() << endl;
        cout << "The sum of " << get_net_pay() << " Dollar\n";
        cout << "_______________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Administrator Number: " << get_ssn() << endl;
        cout << "Administrator. Regular Pay: "
             << salary << endl;
        cout << "_______________________________________________\n";
    }
}
