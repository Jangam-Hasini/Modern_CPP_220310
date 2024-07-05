#include <iostream>

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


Data Creator()  {
    return Data {100};
}

Data  Absorber(Data d1){
    std::cout<<d1<<"\n";
    return d1;
}

int main(){
   Data obj = Absorber(Data{100});
   std::cout<<"object is in main: "<< obj <<"\n";
}