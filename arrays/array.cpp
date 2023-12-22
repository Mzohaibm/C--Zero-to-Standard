// array is a data structure that can hold multiple values and that values are accessed by an index number it is like a varaible that can hold multiple values
#include <iostream>
void myArray();
void threeDim();
int main()
{
    // char name[10];
    // std::cin >> name;
    // std::cout << name << std::endl;
    myArray();
    threeDim();

    return 0;
}
void myArray()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // if you dont know what you want to place in array then create array and assign value latter
    std::string students[] = {"ali", "zohaib", "ahmed"};
    std::cout << students[0] << "\n";
    // one dimensional array
    int oneDArray[5] = {1, 2, 3, 4, 5};
    std::cout << oneDArray[3] << "\n";
    // two dimension array
    int twoDArray[3][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
    };
    std::cout << twoDArray[1][3] << "\n";
    int threeDArray[2][3][4] = {
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4},
        },
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4},
        },
    };
    std::cout << threeDArray[2][1][2] << "\n";
}

#include <iostream>

void threeDim()
{
    // Three-dimensional array
    int threeDArray[2][3][4] = {
        {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12}},
        {{13, 14, 15, 16},
         {17, 18, 19, 20},
         {21, 22, 23, 24}}};

    // Accessing elements
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 4; ++k)
            {
                std::cout << "Element " << i << "," << j << "," << k << ": " << threeDArray[i][j][k] << std::endl;
            }
        }
    }
}

// One-Dimensional Array:
// A collection of elements of the same data type arranged in a linear sequence.

// Two-Dimensional Array:
// An array of arrays. It's like a table with rows and columns.
// Accessing elements requires two indices, one for the row and one for the column.

// Three-Dimensional Array:
// An array of arrays of arrays. It extends the concept of a two-dimensional array into three dimensions.
// Accessing elements requires three indices
// . Arrays in C++ can be one-dimensional, two-dimensional, three-dimensional, and so on
// A one-dimensional array has one dimension, and you access elements using a single index: arr[5].
// A two-dimensional array has two dimensions, and you access elements using two indices: matrix[2][3].
// Similarly, a three-dimensional array has three dimensions, and you access elements using three indices: cube[1][2][3].