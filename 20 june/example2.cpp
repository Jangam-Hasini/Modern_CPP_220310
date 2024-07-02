#include <iostream>

//void magic(int n1){


//}
void magic(int& data){
}

void magic(int&& data){

}

void magic(const int& data){

}

void magic(const int&& data)
{
    
}

int main()
{
    magic(10);
    int n1=10;
    magic(n1);
}