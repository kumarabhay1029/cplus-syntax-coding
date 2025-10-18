#include <iostream>
#include <string>

void reviewAction(const std::string& name, const std::string* extraComment) {
    std::cout << "Thanks for the review, " << name << "!";
    if (extraComment != nullptr) {
        std::cout << " The team will get back to you if you had any questions.";
    }
    std::cout << "\n";
}

int main() {
    std::string name;
    std::string comment;
    std::string* commentPtr = nullptr;

    std::cout << "Thanks for visiting our restaurant. We hope our services find you well!\n";
    std::cout << "Please write your name:\n";
    std::cin >> name;

    std::cout << "Would you like to leave a comment? (y/n):\n";
    char choice;
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        std::cout << "Enter your comment:\n";
        std::cin.ignore(); // clear leftover newline
        std::getline(std::cin, comment);
        commentPtr = &comment;
    }

    reviewAction(name, commentPtr);
    return 0;
}
