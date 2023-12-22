#include <iostream>
#include <vector>
using namespace std;
// it is pending....
// typedef string text_t;
typedef int number_t;
// the using keyword is most popular than typedef 
using text_t = string;
using bool_t = bool;
int main()
{
    text_t first = "hey i am zohaib ";
    number_t age = 20;
    bool_t is = false;
    cout << is << endl;
    cout << first << age << endl;
}