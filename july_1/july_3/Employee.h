#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee
{
    private:
    std::string m_name{""};
    float m_salary{0.0f};
    public:
    Employee()=default;
    ~Employee()=default;
    Employee(const Employee&)=delete;
    Employee(Employee&&)=delete;
    Employee& operator=(const Employee&)=delete;
    Employee& operator=(Employee&&)=delete;
    Employee(std::string name,float salary): m_name {name}, m_salary{salary}{};



    void CalculateMonthlyPF()  { std::cout << 0.11f*m_salary <<"\n";};
    void calculateTaxAmount()  { std::cout<<0.21f*m_salary <<"\n";};

};

#endif // MPLOYEE_H
