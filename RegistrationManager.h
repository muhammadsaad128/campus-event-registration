


#include "Registration.h"
#include <vector>
using namespace std;

class RegistrationManager
{
public:
    vector<Registration> students;

    void registerStudent(string name, string regNo,
                         string workshop);

    void showStudents();

    void searchStudent(string regNo);
};

