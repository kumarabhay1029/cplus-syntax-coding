#include <iostream>
#include <string>

int main() {
    // Real names
    std::string drakeReal = "Aubrey Drake Graham";
    std::string gagaReal = "Stefani Joanne Angelina Germanotta";
    std::string weekndReal = "Abel Makkonen Tesfaye";

    // References (stage names)
    std::string& drake = drakeReal;
    std::string& gaga = gagaReal;
    std::string& weeknd = weekndReal;

    // Output original names
    std::cout << "Drake's real name: " << drake << "\n";
    std::cout << "Lady Gaga's real name: " << gaga << "\n";
    std::cout << "The Weeknd's real name: " << weeknd << "\n";

    // Change original variables
    drakeReal = "Drizzy";
    gagaReal = "Mother Monster";
    weekndReal = "Starboy";

    // Output updated references
    std::cout << "\nUpdated Drake reference: " << drake << "\n";
    std::cout << "Updated Gaga reference: " << gaga << "\n";
    std::cout << "Updated Weeknd reference: " << weeknd << "\n";

    return 0;
}
