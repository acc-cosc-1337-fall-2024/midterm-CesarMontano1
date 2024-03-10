#include <iostream>
#include "question1.h"

int main()
{
    std::string dna1 = "GAGCCTACTAACGGGAT";
    std::string dna2 = "CATCGTAATGACGGCCT";

    // Call the get_dna_p_distance function
    double distance = get_dna_p_distance(dna1, dna2);

    // Display the result
    std::cout << "P-Distance: " << distance << std::endl;

    return 0;
}