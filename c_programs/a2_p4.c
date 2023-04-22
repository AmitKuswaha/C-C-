/* 
   CH-230-A
   a2_p4.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/ 

#include <stdio.h>

int main() {

    /* Declaring the variables */
    float a, b, h;

    /* Reading the inputs */
    scanf("%f\n %f\n %f", &a, &b, &h);

    /* Operating and printing the outputs */
    float square = a * a; // Calculates area of square
    printf("square area=%f\n", square);
    
    float rectangle = a * b; // Calculates area of reactangle
    printf("rectangle area=%f\n", rectangle);

    float triangle = ( a * h ) / 2; // Calculates area of triangle
    printf("triangle area=%f\n", triangle);

    float trapezoid = ( (a + b) / 2 ) * h; // Calculates are of trapezoid
    printf("trapezoid area=%f\n", trapezoid);
    
    return 0;
}
