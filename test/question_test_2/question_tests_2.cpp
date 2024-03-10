#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_fib_sequence", "[get_fib_sequence]") {
    // Test Case 1
    REQUIRE(get_fib_sequence(5) == 5);

    // Test Case 2
    REQUIRE(get_fib_sequence(7) == 13);

    // Test Case 3
    REQUIRE(get_fib_sequence(10) == 55);

    // Test Case 4
    REQUIRE(get_fib_sequence(12) == 144);

    // Add more test cases as needed
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
