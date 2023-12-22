#include <iostream>

int main() {
    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << "Size of float: " << sizeof(float) << " bytes\n";
    std::cout << "Size of double: " << sizeof(double) << " bytes\n";
    std::cout << "Size of char: " << sizeof(char) << " bytes\n";
    std::cout << "Size of bool: " << sizeof(bool) << " bytes\n";

    // Example for string (size will vary based on the implementation)
    std::cout << "Size of std::string: " << sizeof(std::string) << " bytes\n";

    return 0;
}
