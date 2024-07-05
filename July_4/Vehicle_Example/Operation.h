/*

1) CreateCarsAndBikes
2) FindAverageCostOfVehicle: return the average price of all vehicle in our database.
3)returnmatchingInstance: Return the first vehicle whose id matches with the Id parameter received
*/



#include <variant>
#include <optional>
#include <iostream>
#include <list>
#include "Car.h"
#include "Bike.h"
#include <thread>


using VrType=std::variant<Car*,Bike*>;
using DataContainer=std::list<VrType>;
using ThreadContainer=std::list<std::thread>;

class Operations
{
private:
    static DataContainer m_data;
    static ThreadContainer m_thread;
public:
    Operations()=delete;
    Operations(const Operations&)=delete;
    Operations(Operations&&)=delete;
    ~Operations()=default;
    Operations& operator=(const Operations&)=delete;
    Operations& operator=(Operations&&)=delete;

    static void CreateCarsAndBikes();

    static void FindAvgFunction();


   std::optional <VrType> ReturnMatchingInstances(std::string id);

    void deallocate();
    

    void DisplayInsuranceAmount();

    std::optional<unsigned int> FindseatCountForGivenId();
};
