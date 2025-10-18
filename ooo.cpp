#include <iostream>

  void ooo_message(std::string date)
  {
    std::cout << "Thank you for your email\n";
    std::cout << "I am currently out of the office and will be back soon " << date << "." << "\n";
    std::cout << "I will respond as soon as I can upon my return.\n";
  }

  int main()
  {
    ooo_message("19 july");
  }
