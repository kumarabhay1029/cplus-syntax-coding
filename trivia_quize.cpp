#include <iostream>

int main() {
  int score = 0;
  std::cout << "welcome to the trivia quiezes:\nchoose option 1 2 3 4 and words allowed in last question.\n";
  int Q1 = 0;
  std::cout << "Q1) What is the name of the world's longest river? 💧\n";
  std::cout << "1) Missouri River\n";
  std::cout << "2) Nile\n";
  std::cout << "3) Amazon River\n";
  std::cout << "4) Yangtze River\n";
  std::cout << "answer: ";
  std::cin >> Q1;
  if (Q1 == 2) {
    std::cout << "You are correct, well done!\n";
    score += 33;
  } else {
    std::cout << "Incorrect. The correct answer is Nile.\n";
  }

  int Q2 = 0;
  std::cout << "Q2) How many bones are in the human body? 🦴\n";
  std::cout << "1) 92\n";
  std::cout << "2) 150\n";
  std::cout << "3) 206\n";
  std::cout << "4) 10\n";
  std::cout << "answer: ";
  std::cin >> Q2;
  if (Q2 == 3) {
    std::cout << "You are correct.\n";
    score += 33;
  } else {
    std::cout << "Incorrect. The correct answer is 206.\n";
  }


  std::string Q3 = "";
  std::cout << "Q3) What food never spoils? 😷\n";
  std::cout << "answer: ";
  std::cin >> Q3;
  if (Q3 == "honey" || Q3 == "Honey") {
    std::cout << "You are correct.\n";
    score += 34;
  } else {
    std::cout << "You are wrong. The correct answer is honey.\n";
  }


  std::cout << "Your total score is: " << score << "%\n";
}
