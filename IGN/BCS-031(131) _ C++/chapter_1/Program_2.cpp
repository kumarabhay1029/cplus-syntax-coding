// printing first name not after space i.e. if input is "John Doe" then output is "John"
#include <iostream>
#include <conio.h> // for older compiler then we have to to use clrscr() instead of system("cls");
#include <cstdlib> // for system("cls");
main()
{
    char name[15];
    system("cls");  // Requires #include <cstdlib>
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Your name is " << name;  
    return 0;
}
