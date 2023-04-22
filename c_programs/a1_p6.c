/*
   CH-230-A
   a1_p6.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/  

#include <stdio.h>

int main() {

    char c = 'F';
    char reqLetter = c + 3; /* Calculates and stores the required letter */ 
    printf("The third character after c is %c\n", reqLetter);
    printf("The corresponding ASCII code is %d\n", reqLetter);
    return 0;    
}