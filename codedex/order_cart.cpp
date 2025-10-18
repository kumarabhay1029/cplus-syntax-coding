#include <iostream>
#include <vector>

int main() {
  std::vector <std::string> cart = {"🍕 Pepperoni pizza", "🥗 Garden salad","🥤 Diet Coke"};
  cart.push_back("🥫 Marinara sauce");
  cart.pop_back();
  for (const auto& item : cart) 
    std::cout << item << "\n";
  
}