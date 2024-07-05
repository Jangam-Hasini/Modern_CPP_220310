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

void Magic(std::unique_ptr<Data> temp){

}


int main()
{
    std::unique_ptr<Data> ptr4{new Data{100} };







    //std::unique_ptr<Data> ptr5 {ptr4};

    Magic(std::move(ptr4));

    ptr4.reset(new Data{99});
}


#include <iostream>

void demo()


