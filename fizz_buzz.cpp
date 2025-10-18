#include <iostream>

int main() {
  std::string x = "buzz";
  std::string y = "fizz";

  for (int i = 1; i <= 100; ++i) {
    if (i % 15 == 0)
      std::cout << "fizzbuzz\n";
    else if (i % 3 == 0)
      std::cout << y << "\n";
    else if (i % 5 == 0)
      std::cout << x << "\n";
    else
      std::cout << i << "\n";
  }
}