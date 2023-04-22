/* 
   CH-230-A
   a3_p9.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
double sum25(double v[], int n); // Declaring the function

int main() {

    /* Declaring the variables */
    double a[20];
    int b, c;

    scanf("%d", &b); // Reads the integer

    /* Reading all the values for the array a */
    for (c = 0; c != b; c++) {
        scanf("%lf", &a[c]);
    }

    /* Calling and checking the value returned by function */
    if (sum25(a, b) == -111) {
        printf("One or both positions are invalid\n");
    } // prints if function returns -111
    else {
        printf("sum=%lf\n", sum25(a, b));
    } // prints if function retuns anything else
    return 0;
}   

double sum25(double v[], int n) { // Defining the function
    
    int i; 
    double sum = 0;

    for (i = 0; i != n; i++) { 
        sum = v[2]+ v[5];       
    }

    /* Checking if the values are valid or not */
    if ( n >= 6 ) {
        return sum; // Returns sum if valid
    }
    else {
        return -111; // Returns -111 if invalid
    }
}
