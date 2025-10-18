#include <iostream>
#include <string>

class WealthyFamily
{
  public:
    int networth;
    std::string name;
};

int main()
{
  WealthyFamily Abhay;

  Abhay.name = "Abhay";
  Abhay.networth = 30000;

  std::cout << Abhay.name << "\n";
  std::cout << "The " << Abhay.name << " family prefers not to discuss such matters.";


}