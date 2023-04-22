/* 
   CH-230-A
   a2_p9.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>

int main () {
    char a;
    scanf("%c", &a); // Reading a character
    
    /* Printing ASCII value ranging from 48 to 57 as digit */
    if ( (int) a >= 48 && (int) a <= 57 )  {
        printf("%c is a digit\n", a); 
    }

    /* Printing ASCII value ranging from 65 to 90 or 97 to 122 as letter */
    else if ( ( (int) a >= 65 && (int) a <= 90 ) 
                || ( (int) a >= 97 && (int) a <= 122) ) {
        printf("%c is a letter\n", a);
    }

    /* Printing remaining ASCII value as some other symbol */
    else {
        printf("%c is some other symbol\n", a);
    } 
    return 0;
}
