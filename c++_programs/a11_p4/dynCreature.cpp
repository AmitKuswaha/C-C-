/*
CH-230-A
a11_p4
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include "Creature.h"

using namespace std;

int main()
{
    string c[3] = {"wizard", "object1", "object2"};
    string a;
    cout << "Enter a word: ";
    getline(cin, a);
    while (a != "quit") {
        if (a == c[0]) {
            cout << "\nDynamically creating a Wizard.\n";
            Wizard *w = new Wizard; // Dynamically created an object
            w->run();
            w->hover();
            delete w; // Releasing the memory of the object 
        }

        if (a == c[1]) {
            cout << "\nDynamically creating a Pterodactylus.\n";
            Pterodactylus *b = new Pterodactylus; 
                                    // Dynamically created an object
            /* Calling method to print */ 
            b->run(); 
            b->fly();
            delete b; // Releasing the memory of the object
        }

        if (a == c[2]) {
            cout << "\nDynamically creating a KingKong.\n";
            KingKong *k = new KingKong; // Dynamically created an object
            /* Calling method to print */
            k->run();
            k->jump();
            delete k; // Releasing the memory of the object
        }
        cout << endl << "Enter a word: ";
        getline(cin, a);
    }

    return 0;
} 
