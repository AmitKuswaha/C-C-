/* 
   CH-230-A
   a4_p1.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x, upper, lower, size; // Declaring the variables
    
    /* Reading the inputs */
    scanf("%f", &lower); // Lower limit
    scanf("%f", &upper); // Upper limit
    scanf("%f", &size); // Step size


    for (x = lower; x <= upper; x = x + size) {
        double area =  x * x * M_PI ; 
            // Calls M_PI function to get value of pie
            // Operates and stores the value in area
        double perimeter = 2 * M_PI * x;
            // Calls M_PI  function   
        printf("%f %lf %lf\n", x, area, perimeter);
    } // Executes till x is less than equal to upper limit
    return 0;

}
