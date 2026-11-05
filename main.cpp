
#include <iostream>
#include "RegistrationManager.h"
using namespace std;

int main()
{
    RegistrationManager manager;

    int choice;

    do
    {
        cout << "\n===== CAMPUS EVENT REGISTRATION =====" << endl;
        cout << "1. Register Student" << endl;
        cout << "2. Show Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        cin.ignore();

        if (choice == 1)
        {
            string name, regNo, workshop;

            cout << "Enter Name: ";
            getline(cin, name);

            cout << "Enter Registration No: ";
            getline(cin, regNo);

            cout << "Enter Workshop: ";
            getline(cin, workshop);

            manager.registerStudent(name, regNo, workshop);
        }

        else if (choice == 2)
        {
            manager.showStudents();
        }

        else if (choice == 3)
        {
            string regNo;

            cout << "Enter Registration No: ";
            getline(cin, regNo);

            manager.searchStudent(regNo);
        }

        else if (choice == 4)
        {
            cout << "Program Ended!" << endl;
        }

        else
        {
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
