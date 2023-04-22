/* 
   CH-230-A
   a3_p5.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>



int main() {
    /* Declaring the variables */
    char c;
    int n;
    double m[100], f, sum = 0;

    printf("Enter the character:\n");
    scanf("%c", &c); // Reading the character
    printf("Enter an integer:\n");
    scanf("%d", &n); // Reading the integer

    /* Reading the temperatures */
    int b;
    printf("Enter %d temperatures: \n", n);
    for( b=0; b < n; b++ ) {
        scanf( "%lf", &m[b] );
    }
    
    switch (c) {
        case 's':  // Executes when the character is 's'
            for( b=0; b < n; b++ ) {
                sum = sum + m[b];
            } // Operating the sum of the temperatures
            printf( "The sum of the temperature is %lf\n", sum );
        break;

        case 'p':  // Executes when the character is 'p'
            printf("The list of all temperatures:\n");
            for( b=0; b < n; b++ ) {      
                printf( "%lf\n", m[b] );
            } // Prints all the temperatures
        break;

        case 't':  // Excutes when the character is 't'
            printf("The list of all temperatures in fahrenheit:\n");
            for( b=0; b < n; b++ ) {       
                f = ( ( m[b] * 9 ) / 5 ) + 32;  
                printf("%lf\n", f);
            } // Prints all the temperatures in Fahrenheit
        break;

        default: // Executes when the character is not s,p or t
            for( b=0; b < n; b++ ) {
                sum = sum + m[b];
            } // Operates the sum of the temperatures
            printf("The mean of the temperatures is %lf\n", sum / n );
        break;
    }
    return 0;
}
