#include <iostream>
#include <string>
int myNum = 55;
void students(std::string yourName, int age);
double sqr(double length);
int num();
int num(int nums);
int main()
{
    // function is a block of reuseable piece of code
    std::string yourName = "Zohaib";
    int age = 20;
    students(yourName, age);
    double length = 5;
    double area = sqr(length);
    std::cout << "Hello the length is " << area << std::endl;
    int nums = 12;
    int numResult = num(nums);
    std::cout << "Hello the numbers are " << numResult << std::endl;
    return 0;
}
// we can rename parameters it is not necessary to same parameters and arguments names
void students(std::string yourName, int age)
{
    std::cout << "Hello your name is ..." << yourName << " and age is " << age << std::endl;
}

double sqr(double length)
{
    int myNum = 5;
    std::cout << "Hey the number is " << ::myNum << std::endl;
    return length * length;
}

int num()
{
    return 123;
}
int num(int nums)
{
    return nums * nums;
}
// a function name + its paramterers is known as function signature and each function signature need to be unique
// functions can share same name in one file but for this we need to set different parameters
// a best way to write any type of function in cpp
// it is legal to use name same name for variables as long as they declare in different blocks and this is fine its best to avoid global varaible if you can because it will take global space and also variable declare within a function are much secure a function will use local variable first if i have two variable with same name one is global and second one is local and i want to use global then i need to use scope resulation operator for it
// Declaration
// returnType functionName(parameterType1 parameter1, parameterType2 parameter2);

// // Definition
// returnType functionName(parameterType1 parameter1, parameterType2 parameter2) {
//     // Function body
//     // Code goes here
//     return returnValue; // Optional return statement
// }
