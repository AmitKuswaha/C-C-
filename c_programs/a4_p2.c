/* 
   CH-230-A
   a4_p2.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
/* Declaring and defining a function to read string until enter is pressed */
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

    char str[100]; // Declaring the variable

    input(str, 100); // Calling function to read input
    
    printf("%c\n", str[0]); // Prints the first character of input

    int i;
    /* Loops till the end of the string */
    for (i = 1; str[i] != '\0'; i++) {

        /* Checking if position is even or odd */
        if ( i % 2 == 0 ) {
            printf("%c\n", str[i]);
                // Prints character on even position
        }
        else {
            printf(" %c\n", str[i]);
                // Prints character on even position with a space
        }
    }
    return 0;
}
