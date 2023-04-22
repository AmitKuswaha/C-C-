/* 
   CH-230-A
   a2_p9.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>

int main () {

    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n); // Reads the integer

    while ( n <= 0 ) { // Checking if the integer is valid or not
        printf("Invalid input\n");
        printf("Enter an integer:\n");
        scanf("%d", &n); // Reads the integer
    }

    printf("1 day = 24 hours\n"); // Prints the output for 1 day

    int a = 2;
    
    while (a <= n) { /* Loops till a is less than equal to n */
           printf("%d days = %d hours\n", a, a * 24);
           a++; // Increasing a by 1
    }           
    return 0;
}
