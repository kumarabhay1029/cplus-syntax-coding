#include <iostream>
#include <vector>

int main() {
  // 💿 Theme: Indie Travel Songs 

  std::vector<std::string> playlist = {
    "Porches - rangerover", 
    "Mount Eerie - You Swan, Go On", 
    "Carolyn Polachek - Look at Me Now", 
    "Pinegrove - Darkness", 
    "LVL UP - Spirit Was", 
    "Mitski - First Love / Late Spring"
};
  for (const auto& song : playlist) /*for (int i = 0; i < playlist.size(); i++)*/
    std::cout << song << "\n";


}