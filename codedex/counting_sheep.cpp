#include <iostream>

int main() {
 
  std::string animal;
  std::cout << "ennter you favorite animal: "
  std::cin >> animal;

  int counting = 0;
  for(counting; counting <= 50; ++counting;){
    std::cout << counting  <<  animal;

  }
  
}