/* 
   CH-230-A
   a3_p4.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

/* The program returned the position 0 everytime 
   because the return was inside the loop.
   To fix the error, I moved the return outside
   the loop. 
   Now the loop inside the function checks from position 0
   and stops only after there is a match. 
   After loop ends, it returns the position where the 
   character matched.
*/

#include <stdio.h>
int position(char str[], char c) {
    
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx) {
         /* do nothing */
    }
    return idx; // moved the return to outside of loop
}

int main() {

    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
return 0;
}
