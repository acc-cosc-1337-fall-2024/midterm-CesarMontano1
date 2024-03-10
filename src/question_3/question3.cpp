#include "question3.h"

double get_sales_commission(double sales) {
    // Validate for correct input
    if (sales < 0.0) {
        // Handle invalid input
        return -1.0;  // You can choose an appropriate value to indicate an error
    } else if (sales >= 0.0 && sales <= 499.0) {
        return 0.05 * sales;
    } else if (sales >= 500.0 && sales <= 999.0) {
        return 0.06 * sales;
    } else if (sales >= 1000.0 && sales <= 1499.0) {
        return 0.07 * sales;
    } else {  // sales >= 1500.0
        return 0.08 * sales;
    }
}

bool test_config()
{
    return true;
}