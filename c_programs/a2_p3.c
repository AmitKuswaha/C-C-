/* 
   CH-230-A
   a2_p3.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/ 

#include <stdio.h>

int main() {

    /* Declaring the variables */
    int weeks, days, hours, totalhours;

    /* Reading the inputs */
    printf("Enter number of weeks:\n");
    scanf("%d", &weeks); // Reads number of weeks
    printf("Enter number of days:\n");
    scanf("%d", &days); // Reads number of days
    printf("Enter number of hours:\n");
    scanf("%d", &hours); // Reads number of hours

    /* Operating and storing the total number of hours */
    totalhours= (weeks * 7 * 24) + (days * 24) + hours;

    /* Printing the output */
    printf("The total number of hours=%d\n", totalhours);
    return 0;
}
