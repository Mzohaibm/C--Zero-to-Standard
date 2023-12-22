#include <iostream>

int main()
{
    int age;
    std::string result;
    std::cout << "Enter your age ";
    std::cin >> age;
    if (age >= 18)
    {
        result = "Welcome you can do!...";
    }
    else if (age >= 40)
    {
        result = "You can do. But You Nedd to Pay!...";
    }
    else
    {
        result = "Sorry you cannot do!...";
    }
    std::cout << "The result is..." << age << " " << result << "\n";
}