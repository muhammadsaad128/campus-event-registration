
#include "RegistrationManager.h"

void RegistrationManager::registerStudent(
    string name, string regNo, string workshop)
{
    // Check empty fields
    if (name == "" || regNo == "" || workshop == "")
    {
        cout << "Error: All fields are required!" << endl;
        return;
    }
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].regNo == regNo)
        {
            cout << "Duplicate Registration Number!" << endl;
            return;
        }
    }

    Registration s(name, regNo, workshop);
    students.push_back(s);

    cout << "Registration Successful!" << endl;
}



void RegistrationManager::showStudents()
{
    if (students.size() == 0)
    {
        cout << "No students registered!" << endl;
        return;
    }

    for (int i = 0; i < students.size(); i++)
    {
        students[i].display();
    }
}

void RegistrationManager::searchStudent(string regNo)
{
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].regNo == regNo)
        {
            cout << "Student Found!" << endl;
            students[i].display();
            return;
        }
    }

    cout << "Student Not Found!" << endl;
}
