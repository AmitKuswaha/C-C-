/* 
   CH-230-A
   a3_p2.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>

int main () {

    /* Declaring the variables */
    char ch;
    int n;

    printf("Enter a lowercase character:\n");
    scanf("%c", &ch); // Reads a character
    printf("Enter an integer:\n");
    scanf("%d", &n); // Reads an integer
    
    printf("%c\n", ch);

    int a = 1;

    /* Executing and printing till a is less than equal to n */
    while (a <= n) {
           printf("%c-%d\n", ch, a);
           a++; // Increases a by 1
    } 
    return 0;
}
