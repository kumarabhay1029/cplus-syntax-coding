#include <iostream>

int main()
{
  int level = 0;
  std::cout << "enter you level: ";
  std::cin >> level;

  if (level > 0)
  {
    std::cout << "Bronze";
  }
  else if(level > 5 )
  {
    std::cout << "Silver";
  }
  else if (level > 10)
  {
    std::cout << "Gold";
  }
  else if (level > 15)
  {
    std::cout << "platinium";
  }
  else
  {
    std::cout << "Diamond";
  }
}
