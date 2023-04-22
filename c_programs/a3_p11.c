/* 
   CH-230-A
   a3_p11.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
void input(char *string, int length); // Declaring a function

int main() {
    char one[100], two[100], c; // Declaring variables
   
    input (one, 100); // Calling a function to read string one 
    input (two, 100); // Calling a function to read string two
    scanf("%c", &c); // Reads a character

    /* Operating and printing the length of both strings */
    int l1 = strlen(one);
    int l2 = strlen(two); 
    printf("length1=%d\n", l1);
    printf("length2=%d\n", l2);

    int d = strcmp(one, two); // compares strings and returns a value
    
    /* Concatenating both strings and printing the output */
    printf("concatenation=%s\n", strcat(one, two));

    /* Copying string two and printing it */
    char copy[100];
    strcpy(copy, two); 
    printf("copy=%s\n", copy);

   
    /* Checking if one is larger, smaller or equal to two */
    if ( d == 0 ) {
        printf("one is equal to two\n");
    }
    else if ( d > 0 ) {
        printf("one is larger than two\n");
    }
    else {
        printf("one is smaller than two\n");
    }
    
    int i;

    /* Finding the position of char c in the string two */
    for (i=0; i != strlen(two); i++) {
        if ( two[i] == c ) {
            printf("position=%d\n", i); // Prints the position
            break; // Exit the loop
        }
        else if ( i == strlen(two) - 1 ){
            printf("The character is not in the string\n"); 
                // Prints when no match
            break; // Exits the loop
        }        
    }
    return 0;
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
