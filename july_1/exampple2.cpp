#include <iostream>
#include <thread>
#include <mutex>

class  MathOperations
{
private:
    int32_t m_value{0};
public:
  MathOperations(const MathOperations&)=delete;
  MathOperations(MathOperations&&)=delete;                                                                                                                    
  MathOperations& operator=(const MathOperations&)=delete;
  MathOperations& operator=(MathOperations)
};
int main()
{
    std::thread t1 {&MathOperations::Square,MathOperations{10},   };
    MathOperations m1 {100};
    std::thread t2 {m1,};
    std::thread t3{&MathOperations::additions,&m1,100};
    t1.join();
    t2.join();
    t3.join();
    
    
    
}


     