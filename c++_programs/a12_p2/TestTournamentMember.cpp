/*
CH-230-A
a12_p2
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

using namespace std;

int main() {
    TournamentMember t1; // Calling empty constructor
    t1.print(); // Printing the data
    TournamentMember t2("Cristiano", "Ronaldo", "04/03/1985", 37, 6.02);
        // Calling parametric constructor
    t2.print(); // Printing the data
    TournamentMember t3(t2); // Calling copy constructor
    t3.NewLocation("Portugal"); // Changing location to Portugal
    t3.print(); // Printing the data
    return 0;
}
