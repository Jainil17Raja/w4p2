#include "Cheese.h"
#include <sstream>
#include <iomanip>

namespace sdds {
    Cheese::Cheese() {
        // Initialize member variables with default values
    }

    Cheese::Cheese(const std::string& str) {
        // Implement this constructor to parse the string and initialize member variables
    }

    Cheese Cheese::slice(size_t weight) const {
        // Implement the slice function here
    }

    // Implement getter functions here

    std::ostream& operator<<(std::ostream& os, const Cheese& cheese) {
        // Implement the friend function to format and print the cheese object
    }
}