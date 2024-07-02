#include <iostream>

enum gear
{
    first,
    second,
};

enum rank
{
    first,
    second
};

void magic(int n1){
    std::cout<<n1*100;
}

int main()
{
    first;

    gear g1=gear::first;
    rank r1=rank::first;

    if(g1==r1){
        std::cout<<"000H NO!!!!\n";
    }
    magic(r1);
}