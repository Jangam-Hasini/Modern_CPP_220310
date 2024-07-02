/*
   Employee
       int id, string name, string designation, categorical Department, float salary
*/

#include <iostream>
#include "department.h"

class employee
{
private:
    unsigned int m_id{0};
    std::string m_name {""};
    std::string m_designation {"executive"};
    department m_dept {department::IT};
    float m_salary {0.0f};

public:
    employee()=default;
        
    ~employee() = default;
    employee(const employee& other)=delete;

    employee& operator=(const employee& other)=delete;
    employee(employee&& other)=delete;
    employee& operator=(employee&& other)=delete;
    employee(employee&& other)=delete;
    employee& operator=(employee&& other)=delete;
    
    employee(unsigned int id,std:: string name,std:: string des,department dept,float salary) :m_id (id),m_name (name),
    m_salary (salary),m_designation(des),m_dept (dept)
    {

    }

};

int main()
{
    employee* ptr {nullptr};
    ptr=new employee();
    ptr=new employee(101,"hasini","trainer",department::IT,9000.0f);

    int n1{10};
    int* ptr {nullptr};
    int arr[3] {1,2,3};
    //employee e1();
    employee e1 (102, "greesh", "admin", department::ADMIN,8000.0f);

}


