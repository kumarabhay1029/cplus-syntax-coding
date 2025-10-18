#include <iostream>
#include <string>

class Restaurant {
public:
  std::string name;
  std::string category;
  double rating;
  std::string price;
  bool delivery;
};

int main() {
  Restaurant peter_luger;
  Restaurant kat;
  
  peter_luger.name = "Peter Luger Steak House";
  peter_luger.category = "American";
  peter_luger.rating = 4.4;
  peter_luger.price = "200$";
  peter_luger.delivery = false;

  kat.name = "Kumar";
  kat.category = "European";
  kat.rating = 5.0; // Usually ratings are up to 5
  kat.price = "13$";
  kat.delivery = false;
}