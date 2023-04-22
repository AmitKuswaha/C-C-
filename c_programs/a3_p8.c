/* 
   CH-230-A
   a3_p8.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
float sum_all(float n[10], int m); // Declaring Function to return sum
float average(float d, int n); // Declaring Function to return average

int main() {

    /* Declaring and initializing variables */
    float a[10];
    int b, c = 0;;

    /* Excecuting till b is less than 10 */
    for( b=0; b < 10 ; b++ ) {
        scanf( "%f", &a[b] ); // Reading the inputs 
        c++; // Counts all the inputs

        /* Checking the inputs */
        if  (a[b] == -99.0) { 
            c = c-1; 
                // Decreases the total number of input by 1
            break; 
                // Stops the loop if the input is -99.0
        }
    }

    float sum1 = sum_all(a, c); 
        // Calls the function sum_all and stores the sum of inputs
    printf( "The sum of number = %f\n", sum1 ); 
        // Prints the sum of inputs
    printf("The average of number = %f\n", average(sum1 , c)); 
        // Calls the function average and prints the average of inputs
    return 0;
}

/* Defining the function to return sum of inputs */
float sum_all(float n[10], int m) { 

    int i; float sum = 0;
    for (i = 0; i != m; i++ ) {
        sum = sum + n[i];
    } // Loops till i is not equal to m

    return sum; // Returns the sum of inputs
} 

/* Defining the function to return average of inputs */
float average(float d, int n) {

    float avg = d / n;
    return avg; // Returns the average
}
