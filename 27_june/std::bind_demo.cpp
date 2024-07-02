/*

     std::bind allows use to "refactor"/"repurpose"/"remodel" an existing function to create "partially-implemented" 
     functions

*/

/*
    cp      -r     source   destination

    strcpy(destination,source)

    old parameter sequence (sr.no,state, deuration, after-duration_state)
    new parameter sequence (sr.no,)

      g(x) is a partial function implemented on f(x,y) where y is 4 
*/

#include<iostream>
#include <functional>

void formula(int x,int y, int z){
    std::cout<< ( (x+y)-z);
}
int main()
{
    auto partial_formula=std::bind(&formula,100,std::placeholders::_1,
    std::placeholders::_2);

    partial_formula(10,90);

     auto swapped_formula=std::bind(&formula,100,std::placeholders::_2,
    std::placeholders::_3);

    swapped_formula(10,20,30);
    auto weirdly_mapped_formula=std::bind(&formula, 100,200,std::placeholders::_2);

    weirdly_mapped_formula
    
}