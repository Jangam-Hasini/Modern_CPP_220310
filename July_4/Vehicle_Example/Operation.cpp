#include "Operation.h"

void Operations::CreateCarsAndBikes()
{

    m_data.emplace_back( new Car("c101", 9000.0f,4) );
    m_data.emplace_back( new Car("b102", 9000.0f,4) );
    m_data.emplace_back( new Bike("b103", 9000.0f) );
    m_data.emplace_back( new Car("c104", 9000.0f,4) );
    m_data.emplace_back( new Bike("b105", 9000.0f) );

}
    
void Operations::FindAvgFunction()
{

    if (m_data.empty()){
        std::cerr<<"Empty data container\n";
    }

    float total {0.0f};
    for(const VrType v: m_data) {
        std::visit( [&](auto&& val){ total += val->price();},v);
    }

    if(!m_data.empty()){
        std::cout<<"Total cost is: "<< total << "\n";
    }
}
std::optional <VrType> ReturnMatchingInstances(std::string id);
{
    if (m_data.empty()){
        std::cerr << "Empty data container\n";
    }
    std::optional<VrType> result{std::nullptr};
    bool m_id_found {false};

    for(const VrType v: m_data){
        std::visit(
            [&] (auto&& val) {if(val->id()==id)  { result=v;break;}},v);

            if(m-id_found){
                break;
            }
        
    }
    return result;
}

void Operations::deallocate()
{
    if(m_data.empty()){
        std::cerr << "Empty data container\n";
    }
    for(const VrType v : m_data){
        std::visit([](auto&& val){   delete val; }, v);
    }

}


void Operations::DisplayInsuranceAmount()
{

    if(m_data.empty()){
        std::cerr << "empty data container\n";
    }
    for(const VrType v: m_data){
        std::visit([](auto&& val) )
    }
}

void Operations::MapThreads()
{
    m_threads.emplace_back(   operations::FindAvgCost);
   // m_thread.emplace_back(    operations::ReturnMatchingInstance,   "b100");
    m_threads.emplace_back(   operations::DisplayInsuranceAmount    );
    //m_threads.emplace_back(   operations::FindSeatCountForGivenId     );

}


void operations::JoinThreads()
{
    for(std::thread& th : m_threads){
        
    }
}