/*
CH-230-A
a11_p4
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

/* Defining the constructors for parent and derived classes */
Creature::Creature(): distance(10) {
    cout << "Creature Constructor called" << endl;
}   

Wizard::Wizard(): distFactor(3) {
    cout << "Wizard Constructor called" << endl;
}  

Pterodactylus::Pterodactylus(): flyfactor(12) {
    cout << "Pterodactylus Constructor called" << endl;
}

KingKong::KingKong() : jumpfactor(15) {
    cout << "KingKong constructor called" << endl;
}

/* Defining the destructors for parent and derived classes */
Creature::~Creature() {
    cout << "Destructing Creature" << endl;
}

Wizard::~Wizard() {
    cout << "Destructing Wizard" << endl;
}

Pterodactylus::~Pterodactylus() {
    cout << "Destructing Pterodactylus" << endl;
}

KingKong::~KingKong() {
    cout << "Destructing KingKong" << endl;
}

/* Defining methods to print the datas of parent and derived classes */
void Creature::run() const { 
    cout << "running " << distance << " meters!\n";
}  

void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

void Pterodactylus::fly() const {
    cout << "flying " << (flyfactor * distance) << " meters!" << endl;
}

void KingKong::jump() const {
    cout << "jumping " << (jumpfactor * distance) << " meters!" << endl;
}
