#include <iostream>
#include <string>

class Cat
{
public:
  std::string name;
  std::string breed;
  int age;
  std::string rescued;
  float mood;
  float hunger;
  
  void feed()
  {
    if (hunger < 10)
      hunger++;
  }
   
  void play()
  {
    if (mood < 10)
      mood++;
  }

  void status()
  {
    std::cout << "status of your pet: \n";
    std::cout << "name: " << name << "\n";
    std::cout << "breed: " << breed << "\n";
    std::cout << "age: " << age << "\n";
    std::cout << "rescued: " << rescued << "\n";
    std::cout << "mood: " << mood << "\n";
    std::cout << "hunger level: " << hunger << "\n";
  }
};

int main()
{
  Cat mycat;
  mycat.name = "Kat";
  mycat.breed = "indian orange";
  mycat.age = 99;
  mycat.rescued = "19 july 2025";
  mycat.mood = 5.5;
  mycat.hunger = 9.9;
  
  mycat.feed();
  mycat.play();
  mycat.status();
}