#ifndef SDDS_CHEESE_H
#define SDDS_CHEESE_H

#include <string>
#include <iostream>

namespace sdds {
    class Cheese {
        std::string m_name;
        int m_weight;
        double m_price;
        std::string m_features;

    public:
        Cheese();
        Cheese(const std::string& str);
        Cheese slice(size_t weight) const;
        
        // Getter functions for member variables
        std::string getName() const;
        int getWeight() const;
        double getPrice() const;
        std::string getFeatures() const;

        // Friend function to overload the insertion operator
        friend std::ostream& operator<<(std::ostream& os, const Cheese& cheese);
    };
}

#endif