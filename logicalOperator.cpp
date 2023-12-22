#include <iostream>

int main()
{
    int x = 5;
    int y = 10;

    // AND (&&) example
    if (x > 0 && y > 0)
    {
        std::cout << "Both x and y are positive." << std::endl;
    }
    else
    {
        std::cout << "At least one of x or y is not positive." << std::endl;
    }

    int a = 3;
    int b = 5;
    // OR (||) example
    if (a > 0 || b > 0)
    {
        std::cout << "At least one of a or b is positive." << std::endl;
    }
    else
    {
        std::cout << "Neither a nor b is positive." << std::endl;
    }

    int n = 4;
    int m = 2;
    // NOT (!) example
    bool isXNegative = !(n >= 0);
    if (isXNegative)
    {
        std::cout << "n is negative." << std::endl;
    }
    else
    {
        std::cout << "n is non-negative." << std::endl;
    }

    return 0;
}
