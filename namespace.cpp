#include <iostream>
using namespace std;
namespace first
{
    int x = 0;
}
namespace second
{
    int x = 1;
}
int main()
{
    using std::cerr;
    using std::cout;
    using std::endl;
    using std::string;
    // if i use this line we dont need to write std for individual string however the standarad namespace have 100 of different entities
    // using namespace first;
    int x = 2;
    string names = "hey how are you";
    std::cout << names << "\n";
    std::cout << second::x << "\n";
    cout << "hello zohaib" << endl;
    std::cout << x;
}

// In C++, both using namespace std; and using std:: are used to simplify the usage of entities from the std namespace, but they have different scopes and implications.

// the :: is known is as the scope resulation operator