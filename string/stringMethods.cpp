#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter About Yourself... \n";
    std::getline(std::cin, name);
    if (name.empty())
    {
        std::cout << "Sorry did not enter a char... \n";
    }
    else if (name.length() < 2)
    {
        name.clear();
        std::cout << "Your name is clear because, you have enter just one char... \n";
    }
    else
    {
        if (name.length() > 5)
        {
            std::cout << "Your name can't bo over 5 characters \n";
        }
        else
        {
            std::cout << "Your name is..." << name << "\n";
        }
    }

    // append a string at the end of another string
    std::string st1 = "person1";
    std::string st2 = "person2";
    st1.append(st2);
    std::cout << "Appended String: " << st1 << std::endl;
    // erase
    std::string myString = "Hello, World!";
    myString.erase(7, 5); // Erase 5 characters starting from index 7
    std::cout << "Modified String: " << myString << std::endl;
    // size
    std::string thisString = "Hello, World!";
    std::cout << "Size of the string: " << thisString.size() << std::endl;
    // substr
    std::string meString = "Hello, World!";
    std::string substring = meString.substr(7, 5); // Starting from index 7, take 5 characters
    std::cout << "Substring: " << substring << std::endl;
    // at
    std::string atString = "Hey your name";
    std::cout << atString.at(1) << "\n";
    // insert with the help of it we can insert character at a given position we can only insert just one char with the help of it
    std::string insString = "Hello";
    std::cout << insString.insert(3, "@") << "\n";
    // find it will return fist word length
    std::string findStr = "Heydfd i am zohaib";
    std::cout << findStr.find(' ') << std::endl;
    // erase we can erase a portion of string it will take begining index and ending index of string
    std::cout << findStr.erase(0, 3);
    return 0;
}

// at
// The at method in C++ is a member function of the std::string class, and it's used to access the character at a specific position (index) within the string. The primary purpose of the at method is to provide a safe way to access characters by performing bounds checking.