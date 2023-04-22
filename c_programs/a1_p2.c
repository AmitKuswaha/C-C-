/* 
   CH-230-A
   a1_p2.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/  

/*
   Since, no argument is defined for the corresponding int specifier, 
   there is an undefined behaviour where the program returns 
   a random integer everytime. 
   
   To print the correct value, I defined an argument i.e. result variable for
   the corresponding specifier inside the printf function.
*/

#include <stdio.h>

int main() {
   
    int result; /* The result of our calculation */
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result); /* Defined an argument to print */
    return 0;
}