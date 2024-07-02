#include <iostream>
#include <functional>

using Operation = std::function<int32_t(int32_t)>;
void Adaptor(Operation fn,   int32_t value){
    std::cout<<fn(value);
}

int main()
{
    auto fn = [](int32_t n)  {  return n* 100;   };

    Adaptor(fn,10);
}