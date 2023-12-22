#include <iostream>

int main()
{
    std::string name;
    int age;
    std::cout << "What is your name? : ";
    std::cin >> name;
    std::cout << "What is your age? : ";
    std::cin >> age;
    // if you need to accept a string that includes white spaces then it is better option to using get line function like this
    std::string your_note;
    std::cout << "Tell me something : ";
    // Using std::getline with std::ws to skip leading whitespace
    std::getline(std::cin >> std::ws, your_note);
    std::cout << "Hello Your name is " << name << std::endl;
    std::cout << "Hey your age is " << age << std::endl;
    std::cout << "Hey your saying ... " << your_note << std::endl;
}
// The >> operator is called the "extraction" or "input" operator, and the << operator is called the "insertion" or "output" operator in C++. They are used for input and output operations.
// cout and << work together for output, allowing you to display information.
// cin and >> work together for input, enabling you to receive data from the user.
// standarad input and standarad output
// Without std::ws, leading whitespace characters are included in the string.
// With std::ws, leading whitespace characters are ignored, and the string contains only the actual content entered by the user.            