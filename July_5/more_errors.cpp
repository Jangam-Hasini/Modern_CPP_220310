#include <iostream>
#include <thread>

void formula(int& val,float factor, const std::string& name){
    std::cout<<"absoutely important work";
}


int main()
{
    int n1{10};
    std::thread t1 {&formula,};
    
}