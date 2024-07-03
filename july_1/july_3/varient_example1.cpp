#include <iostream>
#include <vector>
#include <variant>

int main()
{
    int32_t n1{100};
    std::string s1 {"Hasini"};
    std::variant<int32_t, std::string> vr;

    vr=n1;
    std::cout << "Variant is working\n";
    vr=s1;

    


    
}