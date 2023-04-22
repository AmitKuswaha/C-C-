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

string TournamentMember::location = "Bremen"; // Default Location

/* Defining the constructors */
TournamentMember::TournamentMember() {
    cout << "Calling empty constructor" << endl;
    strcpy(fname, "Default_F");
    strcpy(lname, "Default_L");
    strcpy(dob, "--/--/----");
    age = 0;
    height = 0;
} // Empty constructors

TournamentMember::TournamentMember(const char newfname[36], 
    const char newlname[37], const char newdob[11], int newage, double newheight) {
    cout << "Calling parametric constructor" << endl;
    strcpy(fname, newfname);
    fname[35] = '\0';
    strcpy(lname, newlname);
    lname[36] = '\0';
    strcpy(dob, newdob);
    dob[10] = '\0';
    age = newage;
    height = newheight;
} // Parametric constructors

TournamentMember::TournamentMember(const TournamentMember& team) {
    cout << "Calling copy constructor" << endl;
    strcpy(fname, team.fname);
    strcpy(lname, team.lname);
    strcpy(dob, team.dob);
    age = team.age;
    height = team.height;
} // Copy constuctors

/* Defining the destructors */
TournamentMember::~TournamentMember() {
    cout << "Destructor called" << endl;
}

/* Defining the methods */
void TournamentMember::print () const{
    cout << "Creating the class" << endl << endl;
    cout << "First Name: " << fname << endl;
    cout << "Last Name: " << lname << endl;
    cout << "Date of Birth: " << dob << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Location: " << location << endl;
    cout << endl << endl;
}

void TournamentMember::NewLocation(string newloc) {
    location = newloc;
    cout << "Change the location of members to " << newloc << endl;
}

    
