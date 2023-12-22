#include <iostream>
void secondTester();
void tester();
int main()
{
    secondTester();
    tester();
    return 0;
}

void tester()
{
    // int table;
    // int count;
    // std::cout << "Enter a number that you want to write table: ";
    // std::cin >> table;
    // std::cout << "Enter count (that how many time to calculate this table): ";
    // std::cin >> count;

    // for (int i = 0; i <= count; i++)
    // {
    //     int result = table * i;
    //     if (result > 100 && result < 200)
    //     {
    //         std::cout << "Hey you are here..." << std::endl;
    //         continue; // skip the rest of body for result > 100 it will skip current iteration
    //     }
    //     else if (result > 300)
    //     {
    //         std::cout << "You have reached limit" << std::endl;
    //         break; // Exit loop when it reach
    //     }
    //     else
    //     {
    //         std::cout << table << " x " << i << " = " << result << "\n";
    //     }
    // }
}

void secondTester()
{
    //  int aa = 0;

    // loop_start:
    // if (aa < 5) {
    //     std::cout << aa << " ";
    //     aa++;
    //     goto loop_start;  // Jump to the labeled statement
    // }

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int i = 0;
    while (i < n)
    {
        std::cout << "hey i is " << i << "\n";
        if (i % 3 == 0)
        {
            i = i + 2;
            std::cout << "hey the skipping are " << i << "\n";
            continue;
        }
        i = i + 5;
    }
}