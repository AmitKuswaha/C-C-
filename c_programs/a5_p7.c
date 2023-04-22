/* 
   CH-230-A
   a5_p7.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

    char str1[100], str2[100]; // Declaring two arrays
    
    /* Reading the input for both arrays */
    input(str1, 100);
    input(str2, 100);

    int n = strlen(str1) + strlen(str2);
        // Operates and stores the sum of lengths
    
    char *result;
    result = (char*) malloc(sizeof(char) * n); // Allocating memory to array
    if (result == NULL) {
        exit(1);
    } // Exits the program if the memory is invalid
    
    char *c = strcat(str1, str2); // Concatenates and stores the inputs
    printf("Result of concatenation: %s\n", strcpy(result, c)); 
        // Copies the concatenated value in the result and print it

    free(result); // Releases the memory
    return 0;
}
