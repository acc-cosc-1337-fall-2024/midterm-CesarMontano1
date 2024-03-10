#include "question1.h"
#include <iostream>

bool test_config()
{
    return true;
}

// Implement the get_dna_p_distance function
double get_dna_p_distance(const std::string& dna1, const std::string& dna2) {
    // Check if the lengths of the input strings are equal
    if (dna1.length() != dna2.length()) {
        // You may choose to handle the error in a way that suits your application
        // For simplicity, I'm printing an error message and returning -1.0
        std::cerr << "Error: Input strings must have the same length." << std::endl;
        return -1.0;
    }

    int differingCharacters = 0;

    // Iterate through the characters of both strings and count the differences
    for (size_t i = 0; i < dna1.length(); ++i) {
        if (dna1[i] != dna2[i]) {
            ++differingCharacters;
        }
    }

    // Calculate the ratio of differing characters
    double p_distance = static_cast<double>(differingCharacters) / dna1.length();

    return p_distance;
}