/*
* Application file for Employee class hierarchy of inheritance
*
* Date: 12/7/2022
* Author: Amparo Godoy Pastore
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "employee.h"
#include "salaried.h"
#include "administrator.h"

using namespace std;
using namespace employeeamparo;

//stores Administrator objects
vector<Administrator> A;
Administrator admin;
//stores Salaried Empl. objects
vector<SalariedEmployee> S;
SalariedEmployee sal;

//function prototypes
void set_admin();
    //Creates new Administrator object, initializes its member variables, and stores it in vector A
void set_sal();
    //Creates new SalariedEmployee object, initializes its member variables, and stores it in vector A
void display_admin();
    //Displays objects contained in vector A
void display_sal();
    //Displays objects contained in vector S
void update_div();
    //Updates and administrator's division
void main_menu();
    //Creates interactive menu, calls other functions
void line (int);
    //Prints a line of length n

//test drive
int main ()
{
    main_menu();

    return 0;
}

void set_admin()
{
   char choice;
   do {

        admin.input_data();
        A.push_back(admin);
        cout << "\n1. Add another\n2. Go back to main menu\n> ";
        cin >> choice;
        getchar();

   } while(choice == '1');
}

void set_sal()
{
   char choice;
   do {

        sal.input_data();
        S.push_back(sal);
        cout << "\n1. Add another\n2. Go back to main menu\n> ";
        cin >> choice;
        getchar();

   } while(choice == '1');
}

void get_check(string the_ssn)
{
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (A[i].get_ssn() == the_ssn)
            A[i].print_check();

    }
    int z = S.size();
    for (int i = 0; i < z; i++)
    {
        if (S[i].get_ssn() == the_ssn)
            S[i].print_check();
    }

}
void display_admin()
{
   if (A.empty())
    cout << "\nNo administrator records available.\n";
   else
   {
       int n = A.size();
       for (int i = 0; i < n; i++)
        {
            A[i].print();
        }
   }
}

void display_sal()
{
    if (S.empty())
        cout << "\nNo salaried employee records available.\n";
    else
    {
       int n = S.size();
       for (int i = 0; i < n; i++)
        {
            S[i].print();
        }
    }
}

void update_div()
{
    string the_ssn, the_division;
    int x;
    cout << "\nEnter administrator's SSN: ";
    cin >> the_ssn;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (A[i].get_ssn() == the_ssn)
            x = i;
    }
    cout << A[x].get_name() << "'s current division: " << A[x].get_division() << endl
    << "New division: ";
    cin >> the_division;
    A[x].set_division(the_division);
    cout << "Updated.\n";
}

void main_menu()
{
    char choice;
    cout << "Welcome\n";
    do {
        cout << "\nMAIN MENU\n"
        "1. Program information\n"
        "2. View records\n"
        "3. Add new administrator or employee\n"
        "4. Print check\n"
        "5. Update administrator's division\n"
        "6. Exit\n> ";
        cin >> choice;
        getchar();
        line(100);
        switch (choice)
        {
        case '1':
            cout << "\nThis program is a record-keeping program with records for salaried employees and administrators.\n"
            "Administrators (Director, Vice President, Supervisor, etc.) are a subset of salaried employees. "
            "\nSalaried employees are a subset of employees. All employees and administrators have a name and SSN.\n";
            line(100);
            break;

        case '2':
            char choice;
            cout << "\n1. Administrator records\n2. Salaried employee records\n3. All records\n> ";
            cin >> choice;
            getchar();
            switch (choice)
            {
            case '1':
                display_admin();
                line(100);
                break;

            case '2':
                display_sal();
                line(100);
                break;

            case '3':
                display_admin();
                display_sal();
                line(100);
                break;

            default:
                cout << "\nError. Process terminated.\n";
                exit(1);
            }
            break;

        case '3':
            char choice2;
            cout << "\n1. New administrator\n2. New salaried employee\n> ";
            cin >> choice2;
            getchar();
            switch (choice2)
            {
            case '1':
                set_admin();
                line(100);
                break;

            case '2':
                set_sal();
                line(100);
                break;

            default:
                cout << "\nError. Process terminated.\n";
                exit(1);
            }
            break;

        case '4':
            {
            string the_ssn;
            cout << "\nEnter the employee's SSN to print check.\n> ";
            cin >> the_ssn;
            get_check(the_ssn);
            line(100);
            }
            break;

        case '5':
            update_div();
            line(100);
            break;

        case '6':
            cout << "\nExiting program...\n";
            exit(1);

        default:
            cout << "\nError. Process terminated.\n";
            exit(1);
        }
    } while(choice != '6');

}

void line (int n)
{
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << '-';
    }
    cout << endl;
}
