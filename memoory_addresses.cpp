#include <iostream>
#include <string>

int main() {
  int x = 21;
  double y = 2024;
  char t = 'A';
  std::string z = "public school";
   
  std::cout << &x << "\n";
  std::cout << &y << "\n";
  std::cout << &z << "\n";
  std::cout << &t << "\n";
}