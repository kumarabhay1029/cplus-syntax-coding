#include <iostream>
#include <string>

class Car
{
public:
  std::string brand;
  std::string model;
  int year;
  bool classic;

}

int main()
{
  Car myCar;
  myCar.model = "Mustang";
  myCar.brand = "Ford";
  myCar.year = 1965;
  myCar.classic  = true;

  

}

