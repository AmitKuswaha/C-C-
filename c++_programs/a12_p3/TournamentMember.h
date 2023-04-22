/*
CH-230-A
a12_p3
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
#include <cstring>

class TournamentMember {
    private:
        char fname[36];
        char lname[37];
        char dob[11];
        int age;
        double height;
        static std::string location;
    public:
        // Declaring the constructors and destructors
        TournamentMember();
        TournamentMember(const char*, const char*, const char*, int, double);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();
        // Declaring the setter for the properties
        void setFname(const char newfname[36]);
        void setLname(const char newlname[36]);
        void setDob(const char newdob[11]);
        void setAge(const int newage);
        void setHeight(const double newheight);
        // Declaring the getter for the properties
        const char* getFname() const;
        const char* getLname() const;
        const char* getDob() const;
        int getAge() const;
        double getHeight() const;
        // Declaring the methods
        void print() const;
        static void NewLocation(std::string);
};

class Players : public TournamentMember {
    private:
        int num;
        std::string pos;
        int goal;
        bool right_footed;
    public:
        // Declaring Constructors and Destructors
        Players();
        Players(const char*, const char*, const char*, int, double,
            int, std::string, bool, int = 0);
        Players(const Players&);
        ~Players();
        // Declaring setters for the properties
        void setNum(int newnum);
        void setPos(std::string& newpos);
        void setFoot(bool inf);
        // Declaring getter for the properties
        int getNum() const;
        std::string getPos() const;
        bool getFoot() const;
        // Declaring the methods
        void printply() const;
        void updgoals();
};
// inline setter methods
inline void TournamentMember::setFname(const char newfname[36]) {
	strcpy(fname, newfname);
}

inline void TournamentMember::setLname(const char newlname[37]) {
	strcpy(lname, newlname);
}
inline void TournamentMember::setDob( const char newdob[11]) {
	strcpy(dob, newdob);
}	
inline void TournamentMember::setAge(int newage) {
	age = newage;
}	
inline void TournamentMember::setHeight(double newheight) {
	height = newheight;
}


//inline getter methods
inline const char* TournamentMember::getFname() const { 
	return this->fname;
}
inline const char* TournamentMember::getLname() const { 
	return this->lname;
}
inline const char* TournamentMember::getDob() const { 
	return this->dob;
}
inline double TournamentMember::getHeight () const { 
	return height;
}
inline int TournamentMember::getAge () const { 
	return age;
}

//inline setter methods for Players class
inline void Players::setNum(int newnum) {
	num = newnum;
}
inline void Players::setPos(std::string& newpos) {
	pos = newpos;
}
inline void Players::setFoot(bool inf){
	right_footed = inf;
}

//inline getter methods for Players class
inline int Players::getNum() const {
	return num;
}
inline std::string Players::getPos() const {
	return pos;
}
inline bool Players::getFoot() const {
	return right_footed;
}
