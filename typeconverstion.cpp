#include <iostream>

int main()
{
    // type converstion = conversion a value of one data type to another
    // Implicit = it is done automatic
    // Explicit = Precede value with new data type (int)
    int myIntt = 5;
    float myFloat = myIntt; // Implicit conversion from int to float
    double myDouble = 7.89;
    int myInt = (int)myDouble; // Explicit C-style casting from double to int

    double x = (int)3.14;

    std::cout << x;
    return 0;
    // It's essential to use type conversion carefully, considering potential data loss or unexpected behavior. Implicit conversions are generally safer, while explicit conversions provide more control but require careful handling by the programmer.
}