#include <iostream>
#include <functional>

/*
    std::function<T> is a wraper that can be used to represent a callable of a certain signature T
    Since this entire data type declaration is lenghty, we can create an alias of it with "using" keyword


*/

using predicate = std::function<bool(int32_t)>;

void Adaptor(predicate fn, int32_t *arr, unsigned int size)
{
    for (int32_t i = 0; i < size i++)
    {
        if (fn(arr[i]))
        {
            std::cout << arr[i] << "\t";
        }
    }
}

int main()
{
    auto fn = [](int32_t number)
    { return number % 2 == 0 };
    int32_t arr[3] = {11, 18, 21};
    Adaptor(fn, arr, 3);
}