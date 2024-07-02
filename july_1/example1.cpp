/*
   Terminologies

   1)CPU: set of hardware responsible for executing tasks in a computing system

   2) System: Any computing device

   3) Processor : hardware chip(made of silicon) designed for executing instructions given by the user of the computer

      eg: intel 17-1265U

   4) Socket: Point on the motherboard where processor is connected.

   5) core: every sensor is divided internally into units called 'cores' each core can execute instruction from one 
            "process" at the given time.

   6) process: A running task  in the system.

*/

#include <iostream>
#include <vector>
#include <thread>
#include <functional>

using Operation = std::function<void(int number)>;
void Adaptor(Operation fn,const std:: vector<int>& data){
    for(int val: data){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        fn(val);
    }
}

void Square(int number){
    std::cout <<number * number;
}

int main()
{
   auto  cube_fn=[](int number) {  std::cout << number * number * number; };
   //Adaptor(Square, std::vector<int> {1,2,3,4,5});
   //Adaptor(cube_fn, std::vector<int> {1,2,3,4,5});
   std::thread t1{ &Adaptor,&Square, std::vector<int>{1,2,3,4,5}   };
   std::thread t2{ &Adaptor,cube_fn, std::vector<int>{1,2,3,4,5}   };

   t1.join();
   t2.join();


}