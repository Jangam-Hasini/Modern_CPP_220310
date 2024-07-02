/*

   More about lambdas:

   1)what are they exactly
       -objects of an anonymous class in the background created by the compiler
   2)What is [] with lambdas
   3)Some weird things to know about lambdas

*/

#include <iostream>
#include <functional>

void add(int32_t n1, int32_t n2) {
    std::cout<<n1+n2 <<"\n";
}







int main()
{
    int data = 20;
    int value;
    auto fn =[data,value] (int32_t n1, int32_t n2) { std::cout<< n1 + n2 << "\n";};
    fn(10,20);
}



/*

example 4: use n1 as captured ariable. n1 should be refered in to the lambdas

           auto fn=[&n1](int n2) {std::cout<<n1+n2;};
           fn(n2); //only n2 is passed as n1 was already captured by reference

example 5: capture all the variables from the surrounding (make them all accessible in the lambda).
           (refer everything in to the lambda when they are accessed in to the body of the lambda)

           auto fn=[&]() {std::cout<<n1+n2+n3;};
           fn(); // all variables were captured `by reference into the lambda




*/
