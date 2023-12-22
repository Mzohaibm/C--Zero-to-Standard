#include <iostream>

int main()
{
    // switch is a alternative to using many else if compare one value against matching cases
    int day;
    std::string message;
    std::cout << "Enter the day that you would like! 1-7 : ";
    std::cin >> day;
    switch (day)
    {
    case 1:
        message = "It is Sunday...";
        break;
    case 2:
        message = "It is Monday...";
        break;
    case 3:
        message = "It is Tuesday...";
        break;
    case 4:
        message = "It is Wednesday...";
        break;
    case 5:
        message = "It is Thursday...";
        break;
    case 6:
        message = "It is Friday...";
        break;
    case 7:
        message = "It is Saturday...";
        break;
    default:
        message = "Invalid Day!";
    }
    std::cout << "Hello the result is..." << message << "\n";
    return 0;
}