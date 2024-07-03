#include <iostream>
#include <variant>
#include <Employee.h>
#include <Businessowner.h>

using VrType=std::variant<BusinessOwner*,Employee*>;
void Display(const VrType v){
    std::visit(   [](auto &&val)  { std::cout<< *val << "\n";}, v) ;

}
int main()
{
    VrType v;
    v = new BusinessOwner{"hasini",90000.0f};
    Display(v);
    v = new Employee{"hasini",10000.0f};
    Display(v);

}
