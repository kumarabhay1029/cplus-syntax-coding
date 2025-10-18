#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  srand(time(NULL));

  int fortune = std::rand() % 6;

  if (fortune == 0)
  {
    std::cout << "Don't pursue happiness – create it.\n";
  }
  else if (fortune == 1)
  {
    std::cout << "All things are difficult before they are easy.\n";
  }
  else if (fortune == 2)
  {
    std::cout << "The early bird gets the worm, but the second mouse gets the cheese.\n";
  }
  else if (fortune == 3)
  {
    std::cout << "Someone in your life needs a letter from you.\n";
  }
  else if (fortune == 4)
  {
    std::cout << "The fortune you search for is in another cookie.\n";
  }
  else
  {
    std::cout << "Help! I'm being held prisoner in a Chinese bakery!\n";
  }

  int lucky1 = rand() % 51;
  int lucky2 = rand() % 51;
  int lucky3 = rand() % 51;
  int lucky4 = rand() % 51;
  int lucky5 = rand() % 51;
  int lucky6 = rand() % 51;

   std::cout << "Lucky numbers: " << lucky1 << " " << lucky2 << " " << lucky3 << " " << lucky4 << " " << lucky5 << " " << lucky6 << "\n";
}

