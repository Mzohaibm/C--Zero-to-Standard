#include <iostream>
#include <cmath>
int main()
{
    double x = 3.9;
    double y = 2;
    double z;
    // z = std::max(x, y);
    // z = std::min(x,y);
    // for power 
    // z = pow(2, 4);
    // for square root
    // z = sqrt(9);
    // if you place nagetvie value with in abs function it will give you the postive version of that number
    // z = abs(-3);
    // z = round(x);
    // z = ceil(x);
    z = floor(x);
    std::cout << z;
}



// ceil stands for "ceiling."
// It rounds a decimal number up to the nearest whole number.
// Example: ceil(3.14) results in 4.
// floor:

// floor rounds a decimal number down to the nearest whole number.
// Example: floor(3.14) results in 3.
// round:

// round rounds a decimal number to the nearest whole number.
// Example: round(3.14) results in 3, and round(3.75) results in 4