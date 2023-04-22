/* 
   CH-230-A
   a3_p7.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
void print_form(int m, int n , char c); // Declaring a function

int main() {

    /* Declaring the variables */
    char line[20];
    int n1, n2;
    char c1;

    /* Reading the inputs */
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%d", &n1);

    fgets (line, sizeof(line), stdin);
    sscanf (line, "%d", &n2);

    fgets (line, sizeof(line), stdin);
    sscanf (line, "%c", &c1);

    print_form(n1, n2, c1); // Calling the function
    return 0;
}

/* Defining the function */
void print_form(int m, int n , char c) {
    int b, e;
    for ( b = n; b <= (m + n -1); b++ ){  
        for ( e = b; e != 0; e-- ) {
            printf("%c", c);
        } // Executes and prints till e becomes 0
        printf("\n");
    } // Executes till b is less than equal to m+n-1 
}
