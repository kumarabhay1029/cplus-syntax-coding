#include <iostream>

int main() {
  double temp;
  std::cout << "enter your temprature(fahrenheit): ";
  std::cin >> temp;
  if (temp > 100.4) {
    std::cout << "you have fever";
  }
  else 
  {
    std::cout << "you dont have a fever";
  }
  
}
