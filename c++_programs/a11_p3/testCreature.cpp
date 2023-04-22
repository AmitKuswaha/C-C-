/*
CH-230-A
a11_p3
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include "Creature.h"

using namespace std;

int main()
{
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    /* Creating two new classes*/
    cout << "\nCreating a Pterodactylus.\n";
    Pterodactylus b; // Constructor called
    /* Calling method to print */ 
    b.run(); 
    b.fly();

    cout << "\nCreating a KingKong.\n";
    KingKong k; // Constructor called
    /* Calling method to print */
    k.run();
    k.jump();
    cout << endl;
    // Destructing the classes

    return 0;
} 
