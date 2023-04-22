/* 
   CH-230-A
   a5_p1.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
void tri_form(int n , char ch); // Declaring a function

int main() {

    /* Declaring the variables */
    char line[20];
    int num;
    char c1;

    /* Reading the inputs */
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%d", &num); // Reads an integer

    fgets (line, sizeof(line), stdin);
    sscanf (line, "%c", &c1); // Reads a character

    tri_form(num, c1); // Calling the function tri_form
    return 0;
}

/* Defining the function to print in triangular form */
void tri_form(int n , char c) {

    int b, e;
    for ( b = n; b >= 1; b-- ){  
        for ( e = 1; e <= b; e++ ) {
            printf("%c", c);
        } // Executes and prints until e is greater than b
        printf("\n"); // Next line
    } // Executes until b is less than 1 
}
