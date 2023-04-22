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

TournamentMember::TournamentMember(const char newfname[36], const char 
    newlname[37], const char newdob[11], int newage, double newheight) {
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
}

void TournamentMember::NewLocation(string newloc) {
    location = newloc;
    cout << "Change the location of members to " << newloc << endl;
}

// Defining Players class
/* Defining constructors */
Players::Players() {
    cout << "Calling Player Empty construtor" << endl;
    num = 0;
    pos = "default";
    goal = 0;
    right_footed = true;
} // Empty constructor 

Players::Players(const char* newfname, const char* newlname, const char* newdob
    , int newage, double newheight, int newnum, string newpos, bool newinf, int
    newgoal) : TournamentMember(newfname, newlname, newdob, newage, newheight){
    cout << "Calling Player Parametric constructor" << endl;
    num = newnum;
    pos = newpos;
    right_footed = newinf;
    goal = newgoal;
}

Players::Players(const Players& p) : TournamentMember(p.getFname(), p.getLname(), 
    p.getDob(), p.getAge(), p.getHeight()) {
    cout << "Calling Player copy constructor" << endl;
    num = p.num;
    pos = p.pos;
    goal = p.goal;
    right_footed = p.right_footed;
} // Copy constructor

/* Defining the destructors */
Players::~Players() {
    cout << "Destructing Players" << endl;
}

/* Defining the methods */
void Players::updgoals() {
    goal++;
    cout << "Goal updated" << endl;
}

void Players::printply() const {
    this->print();
    cout << "Jersey Number: " << num << endl;
    cout << "Position: " << pos << endl;
    cout << "Goals scored: " << goal << endl;
    if (right_footed) {
        cout << "Right Foot" << endl;
    } 
    else {
        cout << "Left Foot" << endl;
    }
    cout << endl;
}

