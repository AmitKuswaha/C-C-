/*
CH-230-A
a9_p5.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main() {
    char n[100];
    int die, randomnumber, g; // Declaring the variables
    cout << "Enter your name: "; 
    cin >> n; // Reading the name
    
    /* Generating a random number between 1 and 100 */
    srand(static_cast<unsigned int>(time(0)));
    randomnumber = rand();
    die = (randomnumber % 100) + 1; 
   
    cout << "Guess a number between 1 and 100: ";
    cin >> g; // Reads the guessed number
    int j = 0; // Counter for the number of tries
    


    while(1) { 

        j++; // Increases the counter
        if (g == die) { 
            cout << "Number of tries: " << j << endl << "Congratulations " 
            << n << ", you guessed the right number." << endl;
            break; // Exits the loop
        } // Executes when guessed number matches
        else if (g < die) {
            cout << "Number of tries: " << j << endl << "Too low" << endl;
        } // Executes when guessed number is low
        else {
            cout << "Number of tries: " << j << endl << "Too high" << endl;
        } // Excecutes when guessed number is high

        cout << "Guess a number between 1 and 100: ";
        cin >> g; // Reads the number again
           
    }
    
    return 0;
}
