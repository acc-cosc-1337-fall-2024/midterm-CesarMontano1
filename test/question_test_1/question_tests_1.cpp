#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get_dna_p_distance with Test Case a", "[get_dna_p_distance]") {
    std::string dna_a1 = "GAGCCTACTAACGGGAT";
    std::string dna_a2 = "CATCGTAATGACGGCCT";
    double expected_distance_a = 0.4118;

    REQUIRE(get_dna_p_distance(dna_a1, dna_a2) == Approx(expected_distance_a).epsilon(0.0001));
}

TEST_CASE("Test get_dna_p_distance with Test Case b", "[get_dna_p_distance]") {
    std::string dna_b1 = "GAGCCTACTAACGGGAT";
    std::string dna_b2 = "GATCGTAATGACGGCCT";
    double expected_distance_b = 0.3529;

    REQUIRE(get_dna_p_distance(dna_b1, dna_b2) == Approx(expected_distance_b).epsilon(0.0001));
}