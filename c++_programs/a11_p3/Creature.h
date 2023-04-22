/*
CH-230-A
a11_p4
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>

using namespace std;

/* Declaring the parent and derived classes*/
class Creature {
	public: // Declaring constructor, destructor and methods
		Creature();  
		void run() const;
        ~Creature();

	protected: // Declaring property
		int distance;
};

class Wizard : public Creature {
	public: // Declaring constructor, destructor and methods
		Wizard();
		void hover() const;
        ~Wizard();

	private: // Declaring property
		int distFactor;
};

class Pterodactylus : public Creature {
    public: // Declaring constructor, destructor and methods
        Pterodactylus();
        void fly() const;
        ~Pterodactylus();
        

    private: // Declaring property
        int flyfactor; 
        
};

class KingKong : public Creature {
    public: // Declaring constructor, destructor and methods
        KingKong();
        void jump() const;
        ~KingKong();

    private: // Declaring property
        int jumpfactor;
};
