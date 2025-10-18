#include <iostream>

int main() {
 int x = 23;
 int y;
 std::cout << "enter the number: ";
 std::cin >> y;

 while (y != x){
  std::cout << "try again\nguess the number: ";
  std::cin >> y;
 }

if (y == x)
  std::cout << "you guessed it correct!";

}