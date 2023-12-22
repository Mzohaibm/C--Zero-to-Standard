// while some conditions that you set will remain true you will continue to execute some code
#include <iostream>
void calculateAverage();
int main()
{
    int num;
    // std::cout << "Enter a number: ";
    // std::cin >> num;
    // while (num < 0)
    // {
    //     std::cout << "Enter a number: ";
    //     std::cin >> num;
    // }
    // an other way for same task
    do
    {
        std::cout << "Enter a number: ";
        std::cin >> num;
    } while (num < 0);
    std::cout
        << "The result is ..." << num;
    calculateAverage();
    return 0;
}

void calculateAverage()
{
    char continueInput;
    do
    {
        int totalGrades = 0;
        int numberOfGrades = 0;
        // Input loop for grades
        do
        {
            int grade;
            std::cout << "Enter a grade: ";
            std::cin >> grade;

            // Add the grade to the total
            totalGrades += grade;
            numberOfGrades++;

            // Ask if the user wants to enter another grade
            std::cout << "Do you want to enter another grade? (y/n): ";
            std::cin >> continueInput;

        } while (continueInput == 'y' || continueInput == 'Y');

        // Calculate and display the average
        if (numberOfGrades > 0)
        {
            double average = static_cast<double>(totalGrades) / numberOfGrades;
            std::cout << "Average Grade: " << average << std::endl;
        }
        else
        {
            std::cout << "No grades entered." << std::endl;
        }

        // Ask if the user wants to calculate grades for another student
        std::cout << "Do you want to calculate grades for another student? (y/n): ";
        std::cin >> continueInput;

    } while (continueInput == 'y' || continueInput == 'Y');

    std::cout << "Program terminated. Goodbye!" << std::endl;
}
