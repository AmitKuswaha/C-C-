/*
CH-230-A
a12_p3
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

using namespace std;

int main() {
    Players t1; // Calling empty constructor
    
    Players t2("Cristiano", "Ronaldo", "04/03/1985", 37, 6.02, 7, "Central Forward", false, 98);
        // Calling parametric constructor
    
    Players t3(t2); // Calling copy constructor
    t3.updgoals();
    t3.NewLocation("Hamburg"); // Changing location to Hamburg
    t1.printply(); // Printing the data
    t2.printply(); // Printing the data
    t3.printply(); // Printing the data

    return 0;
}
