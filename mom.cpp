#include <iostream>

int main() {
  double month1;
  double month2;

  std::cout << "enter month2 : ";
  std::cin >> month2;
  
  std::cout << "Enter month1 : ";
  std::cin >> month1;


  double mom = ((month2 - month1)/month1) * 100;

  std::cout << mom << "%";

}