/*

   first class functions
   A language said to
*/







#include <iostream>
#include <functional>
void Magic(std::function<void(const int32_t)> fn){
    fn(10);
}
std::function<void(int32_t)>demo(){
    return [](const int32_t val).{return.val.*.val.*.val.*.val;};
}

int main(){
    auto fn = [](const int32_t val) {std::cout<<val*val;};
    Magic(fn);
}