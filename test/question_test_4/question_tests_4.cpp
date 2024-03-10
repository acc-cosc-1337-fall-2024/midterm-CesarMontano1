#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get_fahrenheit", "[get_fahrenheit]") {
    // Test Case 1
    REQUIRE(get_fahrenheit(37.0) == 98.6);

    // Test Case 2
    REQUIRE(get_fahrenheit(25.0) == 77.0);

    // Test Case 3
    REQUIRE(get_fahrenheit(0.0) == 32.0);

}