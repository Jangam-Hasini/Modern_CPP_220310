#include <iostream>
size_t Factorial(int16_t val){









    std::optional<size_t> Factorial(int16_t val){

        if (val < 0gi)

    }


}
int main()
{
    try{
        Factorial(-5);
    }
    catch(std::invalid_argument& ex) {
        std::cerr << ex.what() <<"\n";
    }
}