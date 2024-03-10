#include <iostream>
#include "question4.h"

int main()
{
    double celsius;

    do {
        // Step 1: Prompt user for Celsius input
        std::cout << "Enter temperature in Celsius (or enter a negative value to exit): ";
        std::cin >> celsius;

        // Step 4: Check if the user wants to exit
        if (celsius < 0) {
            break;
        }

        // Step 2: Call the get_fahrenheit function
        double fahrenheit = get_fahrenheit(celsius);

        // Step 3: Display the Fahrenheit temperature
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    } while (true);

    return 0;
}