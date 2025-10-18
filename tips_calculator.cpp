#include <iostream>

std::string tips_menu()
{
  std::cout << "               Leave A Tip?              \n";
  std::cout << "                                         \n";
  std::cout << "-------------  ------------  ------------\n";
  std::cout << "|           |  |          |  |          |\n";
  std::cout << "|    15%    |  |    20    |  |    25    |\n";
  std::cout << "|           |  |          |  |          |\n";
  std::cout << "-------------  ------------  ------------\n";
  std::cout << "                                         \n";

  std::cout << "-----------------------------------------\n";
  std::cout << "|                                       |\n";
  std::cout << "|               CUSTOM                  |\n";
  std::cout << "|                                       |\n";
  std::cout << "-----------------------------------------\n";
  return "";
}

float tips_calculator(float total, int percentage)
{
  float tip = total * (percentage / 100.0f);
  float result = total + tip;
  std::cout << "Tip amount: " << tip << "\n";
  std::cout << "Total with tip: " << result << "\n";
  return result;
}

int main()
{
  tips_menu();

  float total = 0;
  int percentage = 0;
  std::cout << "Enter total amount: ";
  std::cin >> total;

  std::cout << "Choose tip percentage (e.g., 15 for 15%): ";
  std::cin >> percentage;

  tips_calculator(total, percentage);
  return 0;
}