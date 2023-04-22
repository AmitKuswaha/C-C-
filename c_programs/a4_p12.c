/* 
   CH-230-A
   a4_p12.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
/* Defining and Declaring a function to replace characters */
void replaceAll(char *str, char c, char e) {

    int i;
    printf("\n%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) { 
            str[i] = e; // Changes matching character with another
            printf("%c is replaced by %c\n", c, e);
            printf("%s\n", str);
        } // Checking if character matches or not
    } // Loops until all characters are not checked
}


int main() {

    char line[20];
    char ch[80], bfr, afr; // Declaring some variables
    fgets(ch, 80, stdin); // Reads the string
    char *e = "stop\n"; // Storing a string in an array

    while (strcmp(ch, e) != 0) { 
        
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%c", &bfr); // Reads the character to replace

        fgets(line, sizeof(line), stdin);
        sscanf(line, "%c", &afr); // Reads the replacing character

        replaceAll(ch, bfr, afr); 
            // Calls function to replace the character and print them
       
        fgets(ch, 80, stdin); // Reads the string
    } // Compares strings and loops until both are same 
    return 0;
}
