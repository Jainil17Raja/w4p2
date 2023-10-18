#ifndef SDDS_CHEESEPArTY_H
#define SDDS_CHEESEPArTY_H

#include "Cheese.h"

namespace sdds {
    class CheeseParty {
        Cheese** m_cheeses;
        size_t m_numCheeses;

    public:
        CheeseParty();
        ~CheeseParty(); // Destructor to release dynamic memory
        CheeseParty(const CheeseParty& other); // Copy constructor
        CheeseParty& operator=(const CheeseParty& other); // Copy assignment operator
        CheeseParty(CheeseParty&& other); // Move constructor
        CheeseParty& operator=(CheeseParty&& other); // Move assignment operator

        CheeseParty& addCheese(const Cheese& cheese);
        void removeCheese();

        // Friend function to overload the insertion operator
        friend std::ostream& operator<<(std::ostream& os, const CheeseParty& party);
    };
}

#endif