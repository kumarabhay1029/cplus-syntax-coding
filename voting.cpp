#include <iostream>

int main() 
{
  int age = 18;
  bool citizen = true;
  bool regist = true;
  
  std::cout << "enter your age: ";
  std::cin >> age;

  std::cout << "are you citizen of india(1 for YES and 0 for NO): ";
  std::cin >> citizen;

  std::cout << "are u registered: ";
  std::cin >> regist;

  if (age >= 18 && citizen && regist)// for age verfication
  {
    std::cout << "you can vote";
  }
  else if (age < 18)
  {
    std::cout << "You are not old enough to vote";
  }
  else if (!citizen)
  {
    std::cout << "You are not eligible to vote";
  }
  else if (!regist)
  {
    std::cout << "You need to register first";
  }
  else
  {
    std::cout << "you have not meet the requirement:\n1.age should be 18 or more.\n2.you must be citizne of india\n3.you must be registered";
  }
  
}
