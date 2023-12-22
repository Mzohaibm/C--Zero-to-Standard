#include <iostream>
using namespace std;
int sum(int a, int b);
int sum1(int &a);
int main()
{
    int a = 4;
    int b = 2;
    int result1 = sum(a, b);

    int a1 = 4;
    int result2 = sum1(a1);
    return 0;
}

// call by value example
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// call by reference
int sum1(int &a)
{
    int c = a + 5;
    return c;
}
// Call by value creates a copy, while call by reference operates directly on the original data.
// In programming terms, "call by value" makes a copy of the variable for the function to use, while "call by reference" allows the function to directly work with the original variable.