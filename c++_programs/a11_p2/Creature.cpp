/*
CH-230-A
a11_p2
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;
};

Creature::Creature(): distance(10) {
    cout << "Creature Constructor called" << endl;
}   

Creature::~Creature() {
    cout << "Destructing Creature" << endl;
}

void Creature::run() const { 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;
};

Wizard::Wizard(): distFactor(3) {
    cout << "Wizard Constructor called" << endl;
}  

Wizard::~Wizard() {
    cout << "Destructing Wizard" << endl;
}

void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

/* Declaring two new derived classes */
class Pterodactylus : public Creature {
    public:  // Declaring constructor, destructor and methods
        Pterodactylus();
        void fly() const;
        ~Pterodactylus();
        

    private: // Declaring property
        int flyfactor; 
        
};

/* Defining the constructor, destructor and methods */
Pterodactylus::Pterodactylus(): flyfactor(12) {
    cout << "Pterodactylus Constructor called" << endl;
}

Pterodactylus::~Pterodactylus() {
    cout << "Destructing Pterodactylus" << endl;
}

void Pterodactylus::fly() const {
    cout << "flying " << (flyfactor * distance) << " meters!" << endl;
}

class KingKong : public Creature {           
    public:  // Declaring constructor, destructor and methods
        KingKong();
        void jump() const;
        ~KingKong();

    private: // Declaring property
        int jumpfactor;
};

/* Defining the constructor, destructor and methods */
KingKong::KingKong() : jumpfactor(15) {
    cout << "KingKong constructor called" << endl;
}

KingKong::~KingKong() {
    cout << "Destructing KingKong" << endl;
}

void KingKong::jump() const {
    cout << "jumping " << (jumpfactor * distance) << " meters!" << endl;
}

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
