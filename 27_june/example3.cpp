#include <iostream>>
#include <functional>

class data
{
private:
    int m_value {0};
public:
   data()=default;
   data(const data&)=delete;
   data(data&&)=delete;
   data& operator=(data&&)=delete;
   data& operator=(const data&)=delete;
   ~data()=default;

   data(int val) : m_value{val} {}     

   void displayreading(int factor){
    std::cout<< m_value * factor;
   }
};
 

 int main()
 {
    data obj {10};
    obj.displayreading(100);
    auto fn = std::bind(&data::displayreading,&obj,100);
    fn();
    data::display(10);
    auto binded_static_display=std::bind(data::display,10);
    binded_static_display();
 }


 /*

     for non-static member functions
     a)object address is mandatory
     b)it must be the first argument after specicying the name of the function in bind
     c)you "must" use & symbol with the name of the member function in bind

     for static member function

     a) No object involved so no address required
 */
