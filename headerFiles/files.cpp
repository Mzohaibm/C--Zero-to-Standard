#include <iostream>
#include <fstream>

int main()
{
    int ar1[5];
    int ar2[5];
    for (int i = 0; i <= 5; i++)
    {
        ar1[i] = i + 5;
        ar2[i] = i + 2;
    }
    std::cout << "hello this is " << ar1[0] << " and " << ar2 << std::endl;
    // std::ofstream outputFile("example.txt");
    // if (outputFile.is_open()) {
    //     outputFile << "Hello, World!" << std::endl;
    //     outputFile.close();
    // } else {
    //     std::cerr << "Unable to open file." << std::endl;
    // }

    return 0;
}

// In C++, ifstream and ofstream are classes provided by the <fstream> header for handling file input and output operations, respectively.

// <fstream>:
// It provides functionality for file input and output operations.
// <iostream>:
// It provides functionality for standard input and output operations.
// iostream:

// Used for input and output operations (cin, cout).
// iomanip:

// Used for manipulating input/output stream.
// fstream:

// Used for file input/output operations.
// cmath:

// Provides mathematical functions (e.g., sqrt, sin).
// cstdlib:

// Standard library for general-purpose functions (e.g., memory allocation).
// ctime:

// Used for date and time operations.
// cstring:

// Provides functions for string manipulation.
// vector:

// Implements dynamic arrays (vectors).
// algorithm:

// Contains common algorithms (e.g., sort, search).
// stdexcept:

// Defines standard exception classes.