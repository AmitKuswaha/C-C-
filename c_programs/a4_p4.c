/* 
   CH-230-A
   a4_p4.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
/* Declaring some functions */
void input(char *string, int length);
int count_consonants(char str[]);

int main() {

    char m[100]; // Declaring a variable

    while (1) {
        
        input(m, 100); // Reads an input
        if (m[0] == '\0') {
            break;
        }
        printf("Number of consonants=%d\n", count_consonants(m));
            // Calls count_consonants function and prints the value
    } // Executes till user doesn't want to stop
    return 0;
}

/* Defining a Function to read input till enter is pressed */
void input(char *string, int length) {
    
    int x;

    fgets(string, length, stdin);
    for(x = 0; x <= length; x++)
    {
        if( string[x] == '\n') {
            string[x] = '\0';
            break; // stops reading after enter is pressed
        }
    }
}

/* Defining a Function to count all consonant of a string */
int count_consonants(char str[]) {

    int i, c = 0;

    /* Loops and checks each character of the string */ 
    for (i = 0; str[i] != '\0'; i++) {
        
        /* Checking for the consonant letters in the string */
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' 
            || str[i] == 'o' || str[i] == 'u') {
            continue; // Continues loop if character is  lowercase vowel
        }
        else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' 
            || str[i] == 'O' || str[i] == 'U') {
            continue; // Continues loop if character is uppercase vowel
        }
        else if (((int)str[i] < 97 || (int)str[i] > 122) 
            && ((int)str[i] < 65 || (int)str[i] > 90)) {
            continue; // Continues loop if character is some other symbol
        }
        else {
            c++; // Counts each consonants in the string
        }
    }
    return c; // Returns number of total consonants
}
