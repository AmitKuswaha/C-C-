/* 
   CH-230-A
   a3_p1.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>

int main () {
     
    /* Declaring the variables */
    float x;
    int n;
    
    /* Reading the inputs */
    scanf("%f", &x);
    scanf("%d", &n);

    /* Loops until integer is invalid */
    while (n <= 0) { 
           printf("Input is invalid, reenter value\n");
           scanf("%d", &n); // Reads new integer
    } 

    /* Executes and prints till n times */
    while (n >= 1){
          printf("%f\n", x);
          n--; // Decreases n by 1
    }
    return 0;
}
