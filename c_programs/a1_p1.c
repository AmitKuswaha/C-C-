/* 
   CH-230-A
   a1_p1.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/   
/*
   There was an error in the program. The value stored in result variable was an integer instead of double. 
   So, to fix that, I added double. 
*/

#include <stdio.h>

int main() {
    double result; /* The result of our calculation */
    result = (double)(3 + 1) / 5;
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}