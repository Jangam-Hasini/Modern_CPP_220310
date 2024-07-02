#include "functionalities.h"

void CreateObjects(EmployeeContainer employees, Projectcontainer projects)
{
    projects.emplace_back(new project("c.111",10,1000.0f));
    projects.emplace_back(new project("c.222",40,1100.0f));
    projects.emplace_back(new project("c.333",40,1200.0f));

    auto itr=project.being();

    employees.emplace_back(new Employee(101,"hasini",))
}