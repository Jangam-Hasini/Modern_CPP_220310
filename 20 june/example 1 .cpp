#include <iostream>

class ABC
{
    private:
    int m_id{0};
    float* m_valueptr{nullptr};
    public:
    ABC()=default;
    ABC(const ABC&)=delete;
    ABC(int id,float* ptr):m_id{id},m_valueptr{ptr}{}
    ABC(ABC&&)=delete;
    ABC& operator=(const ABC&)=delete;
    ABC& operator=(ABC&&)=delete;
    ~ABC() {
        delete m_valueptr;
    }
};


int main()
{
    ABC obj {101, new float(200.0f)};
}