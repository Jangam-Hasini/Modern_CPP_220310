/*
   bool defination fn(){
   ////////
   }


   main()
   {
     bool flag fn();
     if(flag) {
     //////
     
     }

     else {
     ///////
     }

   }


*/



 #include <iostream>
 bool checkDivisibilityBy3(int32_t number){
    return number % 3==0;
 }

 main()
 {
    int32_t n1 {10};
    if( bool flag=checkDivisibilityBy3(n1);   flag){
        std::cout<<"number is divisible by 3";
    }
    else
    {
        std::cerr << "flag is set at: " << std::boolalpha<< flag << "number not divisible\n";
    }

    //std::cout << "cannot access flag now: " << flag;
 }