#include <iostream>

int main()
{
    int n = 5;
    int m = 6;
    m += 5;
    m -= 3;
    m = m * 3;

    m++;
    if (n == m && m > 3)
    {
        std::cout << n << "\n";
    }
    else if (n != 10 || n != 12 && n >= 7)
    {
        std::cout << "hello n is " << m + n << std::endl;
    }
    else
    {
        std::cout << "hell m is " << n;
    }
    return 0;
}