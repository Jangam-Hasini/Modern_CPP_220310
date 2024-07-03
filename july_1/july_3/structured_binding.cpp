#include <iostream>
#include <array>

int main()
{
    std::array<int,2> arr {9000,20};
    auto [salary,age]=arr;
}