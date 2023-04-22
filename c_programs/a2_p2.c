/* 
   CH-230-A
   a2_p2.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/   

#include <stdio.h>

int main() {
    
    char letter; // Declaring the variable

    scanf("%c", &letter); // Reads the variable

    /* Printing the output */
    printf("character=%c\n", letter);
    printf("decimal=%d\n", letter);
    printf("octal=%o\n", letter);
    printf("hexadecimal=%x\n", letter);
    return 0;
}
