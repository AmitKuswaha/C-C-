/*
CH-230-A
a10_p3.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

using namespace std;

class City {
    private: // Properties of the class city
        string name;
        int pop;
        string mayor;
        int area;

    public: // methods to read and write the objects
        void setName(string& newname);
        void setPop(int newpop);
        void setMayor(string& newmayor);
        void setArea(int newarea);
        void print();
        string getName();
};
