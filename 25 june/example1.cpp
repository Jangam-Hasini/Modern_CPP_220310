//week 2 : Modern cpp

/*

     software to be built
     -----> diagnostics of a car at workshop
     objective : I want an "Adaptor" function
     which will accept
     a) vector of integer 32bit numbers
     b) a function that accepts a single integer 32 value and returns
        void

        Adaptor should "map" function provided on the data provided
*/


#include <iostream>
#include <vector>

void square(int32_t number) {
    std::cout<<number*number << "\n";
}
void cube(int32_t number){
    std::cout<<number*number << "\n";
}

void Adaptor(void (*fn)(int32_t number),std::vector<int32_t>& data)
{
    for(int32_t val : data)
    {
        (*fn)(val);
    }
}

int main()
{
    std::vector<int32_t> data  {1,2,3,4,5};
    Adaptor(&cube ,data);
    adaptor(&square, data);
}




/*int main()
{
    void (*ptr)(int32_t)=&square;

    void (*temp) (int32_t number)=&cube;
    (*temp)(10);
    (*ptr)(9);
}
*/