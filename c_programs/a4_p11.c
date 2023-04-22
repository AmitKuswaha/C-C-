/* 
   CH-230-A
   a4_p11.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/* Declaring and defining a function to count characters insensitively */
int count_insensitive(char *str, char c){
    int i;
    int p = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if ((int)str[i] == toupper(c) || (int)str[i] == tolower(c)) { 
            p++; // Counter increases for each matching character
        } // Checking if character(insensitively) is in the string
    } // Loops until all characters are not checked
    return p; // Returns total number of the character
}

/* Defining a function to take string input until enter is pressed */
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

int main() {
    
    char *c; // Declaring first array
    
    c = (char*)(malloc(sizeof(char) * 50)); 
        // Allocating memory to first array
    if (c == NULL){ 
      exit(1); // Exits the program 
    } // Checks if the memory is valid or not
    
    input(c, 50); // Reads the input
    int n = strlen(c); // Calculates the size of string
    
    char *copy; // Declaring second array
    copy = (char*)(malloc(sizeof(char) * n)); 
        // Allocating the length of input as memory for second array
    if (copy == NULL){ 
      exit(1); // Exits the program 
    } // Checks if the memory is valid or not

    strcpy(copy, c); // Copying string c to second array

    free(c); // Releases the memory of first array

    char check[5] = {'b', 'H', '8', 'u', '$'}; // Array of characters
    int i;
    for (i = 0; i != 5; i++) {
        printf("The character '%c' occurs %d times.\n", check[i], 
                count_insensitive(copy, check[i]));
    } // Calling the function to count the occurance of each characters
      // Loops and prints the occurance

    free(copy); // Releases the memory of second array
    return 0; 
}
