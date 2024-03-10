#include <iostream>
#include "question2.h"

int main()
{
    int userNumber;

    do {
        // Step 1: Prompt user for a number and validate the input
        do {
            std::cout << "Enter a number (1 to 15) or 0 to exit: ";
            std::cin >> userNumber;

            if (userNumber < 0 || userNumber > 15) {
                std::cout << "Please enter a number in the range of 1 to 15." << std::endl;
            }
        } while (userNumber < 0 || userNumber > 15);

        // Step 4: Check if the user wants to exit
        if (userNumber == 0) {
            break;
        }

        // Step 2: Call the get_fib_sequence function
        int fibonacciResult = get_fib_sequence(userNumber);

        // Step 3: Display the Fibonacci number
        std::cout << "Fibonacci number for " << userNumber << " is: " << fibonacciResult << std::endl;

    } while (true);

    return 0;
}