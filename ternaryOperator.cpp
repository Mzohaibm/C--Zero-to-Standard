#include <iostream>

int main()
{
    // three ways to use ternary operator in cpp
    // it is replacement of if else statement
    int grade = 20;
    grade >= 60 ? std::cout << "you pass"
                            << "\n"
                : std::cout << "You failed"
                            << "\n";
    bool isAdmin = true;
    std::cout << (isAdmin ? "You are Admin" : "You are User") << "\n";
    int age = 40;
    std::string result = (age < 40 ? "You can do " : "You cannot do");
    std::cout << result << "\n";
}