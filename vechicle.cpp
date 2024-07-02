#include<iostream>

class vechicle
{
private:
   std::string m_id{""};
   std::string m_modelname{""};
public:
    vechicle()=delete;
    ~vechicle()=default;
    vechicle(const vechicle& other)=default;
    vechicle(std::string id,std::string name): m_id{id}, m_modelname{name} {}
};

int main()
{
     vechicle v1{"101", "scross"};

     int n1=10;
     int n2=20;
     n2 = n1;

     vechicle v3{};
     v3 = v1;
}

