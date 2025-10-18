#include <iostream>
#include <vector>

int main() {
  std::vector<int> num = {2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};
  int even_sum = 0;
  int odd_sum = 0;

  for (int i = 0; i < num.size(); i++) {
    int number = num[i];
    if (number % 2 == 0) {
      even_sum += number;
    } else {
      odd_sum += number;
    }
  }

  std::cout << "Total sum of even numbers: " << even_sum << std::endl;
  std::cout << "Total sum of odd numbers: " << odd_sum << std::endl;

  return 0;
}