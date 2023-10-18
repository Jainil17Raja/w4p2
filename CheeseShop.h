#ifndef SDDS_CHEESESHOP_H
#define SDDS_CHEESESHOP_H

#include <string>
#include "Cheese.h"

namespace sdds {
    class CheeseShop {
        std::string m_shopName;
        Cheese** m_cheeses;
        size_t m_numCheeses;

    public:
        CheeseShop(const std::string& name = "No Name");
        ~CheeseShop(); // Destructor to release dynamic memory
        CheeseShop(const CheeseShop& other); // Copy constructor
        CheeseShop& operator=(const CheeseShop& other); // Copy assignment operator
        CheeseShop(CheeseShop&& other); // Move constructor
        CheeseShop& operator=(CheeseShop&& other); // Move assignment operator

        CheeseShop& addCheese(const Cheese& cheese);

        // Friend function to overload the insertion operator
        friend std::ostream& operator<<(std::ostream& os, const CheeseShop& shop);
    };
}

#endif