#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get_sales_commission", "[get_sales_commission]") {
    // Provided test cases
    REQUIRE(get_sales_commission(100.0) == 5.0);
    REQUIRE(get_sales_commission(750.0) == 45.0);
    REQUIRE(get_sales_commission(1100.0) == 77.0);
    REQUIRE(get_sales_commission(1750.0) == 140.0);

    // Additional test cases
    REQUIRE(get_sales_commission(0.0) == 0.0);  // Minimum sales
    REQUIRE(get_sales_commission(-100.0) == -1.0);  // Invalid input
    // Add more test cases as needed
}
