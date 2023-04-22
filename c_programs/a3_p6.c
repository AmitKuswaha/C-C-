/* 
   CH-230-A
   a3_p6.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
float to_pounds(int kg, int g); // Declaring a function

int main() {

    int a, b; // Declaring the variables

    /* Reading the inputs */   
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Result of conversion: %f\n", to_pounds(a, b));
        // Calls the function and prints the value
    return 0;

}

/* Defining the function */
float to_pounds(int kg, int g) {

    float pound = ( kg + (float) g / 1000 ) * 2.2; 
        // Converts and stores weight into pounds
    return pound; 
}