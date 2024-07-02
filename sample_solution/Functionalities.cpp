#include <iostream>
#include "Functionalities.h"
#include "Exeption.h"
#include "Engine.h"
#include <vector>

void Createobjects(std::vector<Engine *> &engines)
{

  engines.emplace_back(new Engine(101, 540, 120.0f));
  engines.emplace_back(new Engine(102, 340, 140.0f));
  engines.emplace_back(new Engine(103, 440, 150.0f));
}

void DisplayObjects(Engine **arr, int N)
{
  for (int i = 0; i < N; i++)
  {
    std::cout << *arr[i] << "\n";
  }
}
float Averagehorsepower(Engine **arr, int N)
{

  float total {0.0f};
  std::size_t validPointerCount {0};
  for(const Engine* e : engines){
    if (e) {
      total += e->horsepower();
      validPointerCount++;
    }

  }
  //for(std::size_t i=0;i<engines.size();i++){
    //if(engines[i]){
      //validPointerCount++;
      //total += engines[i]->horsepower();

    
  

  if(validPointerCount == 0){
    throw Novalidenginefoundexception("all pointers are invalid");
  }
    return total / validPointerCount;
}

float FindTorqueById(std::vector<Engine *> &engines, unsigned int id)
{
  bool atleastonevalidpointerfound {false};
}


float FoundHorsePowerForTorqueEngine(Engine **arr, int N)
{
  
}


