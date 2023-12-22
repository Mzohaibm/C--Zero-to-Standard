#include <iostream>

int main()
{
    //  int *ptr, x, a [10] ; we can also mix data types like it 
    int *firstPtr, *secondPtr, *thirdPtr;
    int num1 = 5;
    firstPtr = &num1;
    int number = 42;
    int *b = &number;
    std::cout << &number << std::endl;
    std::cout << *b << std::endl;
    int **c = &b;
    std::cout << c << std::endl;
    int myArray[] = {10, 20, 30, 40, 50};
    // Address of the first element
    int *addressOfFirstElement = &myArray[0];
    std::cout << "Address of the first element: " << addressOfFirstElement << std::endl;
    return 0;
}

// A pointer is a variable in programming that stores the memory address of another variable. In other words, a pointer "points to" the location in memory where a value is stored. Pointers are used for various purposes, including dynamic memory allocation, accessing data structures, and optimizing certain operations.
// what is pointer? ponter is a data type which holds the address of other data types
// & ----- (address of ) address of operator
// * -----(value at) dereference operator
// our variables store in our ram
//(double pointer) pointer to pointer =====> it store another pointer address

// A nullptr is a keyword in C++ introduced in the C++11 standard to represent a null pointer. It is a safer and more explicit alternative to using NULL or 0 to represent a null pointer.