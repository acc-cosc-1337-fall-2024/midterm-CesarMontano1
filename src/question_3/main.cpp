#include <iostream>
#include "question3.h"

int main()
{
    double sales;

    do {
        // Step 1: Prompt user for sales amount
        std::cout << "Enter the sales amount (or enter a negative value to exit): ";
        std::cin >> sales;

        // Step 4: Check if the user wants to exit
        if (sales < 0) {
            break;
        }

        // Step 2: Call the get_sales_commission function
        double commission = get_sales_commission(sales);

        // Step 3: Display the sales commission
        std::cout << "Sales of " << sales << " yields a commission of " << commission << "." << std::endl;

    } while (true);

    return 0;
}