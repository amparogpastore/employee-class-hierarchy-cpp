/*
* Interface for class Administrator
*
* Date: 12/7/2022
* Author: Amparo Godoy Pastore
*/
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>
#include "employee.h"
#include "salaried.h"

using namespace std;

namespace employeeamparo
{
    class Administrator : public SalariedEmployee
    {
    public:
        void set_division(string new_div);
        string get_division();
        void input_data(); //reading in an administrator's data from the keyboard
        void print() const; //outputs the objects data to the screen
        void print_check();

    private:
        string title;
        string division;
    };
}

#endif // ADMINISTRATOR_H
