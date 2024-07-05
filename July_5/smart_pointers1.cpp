#include <iostream>
#include <memory>

class Data
{
    private:
    int m_value {0};
    public:
    Data()=default;
    ~Data()=default;
    Data(const Data&)=delete;
    Data(Data&&)=delete;
    Data& operator=(const Data&)=delete;
    Data& operator=(Data&&)=delete;
    
    explicit Data(int val): m_value{val} {}

    friend std::ostream &operator<<(std::ostream &os, const Data &rhs){
        os << "m_value: " <<rhs.m_value;
        return os;
    }

};

int main()
{

    std::unique_ptr<int> ptr1 {  (int*)malloc(4) };
    std::unique_ptr<int> ptr2 { new int() };
    std::unique_ptr<char> ptr3 { (char*)malloc(1) };

    Data* d1 {new Data{100} };
    std::unique_ptr<Data> ptr4{ new Data{100} };

    delete d1;

    

}

/*


stack main function
     0x108H   ptr1    0x242117H
     0x100H   grade    'A'
     0x100H     x      10
*/

/*
    voidCalculateresult(input value){

    //allocate something on heap
    
    ptr = heap memory address
    if (value == condition){
         do something with ptr
         //acton to do

         if(condition1){
            take action
         }

         else if(condition 2) {
         throw exception

         }

         else if(condition 3) {
         throw exception

         }

         else  {
         do something!

         }
      }
    }


    Unique ptr
    Note ptr
    Week ptr
*/