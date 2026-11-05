#include <iostream>
#include <string>
using namespace std;

class Registration
{
public:
    string name;
    string regNo;
    string workshop;

    Registration(string n, string r, string w)
    {
        name = n;
        regNo = r;
        workshop = w;
    }

    void display()
    {
        cout << "Muhammad saad: " << name << endl;
        cout << "16458: " << regNo << endl;
        cout << " c++ Workshop: " << workshop << endl;
        cout << "-------------------" << endl;
    }
};
