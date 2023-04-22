/* 
   CH-230-A
   a2_p7.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/  

/*
  There is an error in the program because of which it stucks in a loop of
  i = 8. It happens because of syntaxing error in the while loop.
*/
#include <stdio.h>

int main() {
   
    int i = 8;
    while (i >= 4) {
           printf("i is %d\n", i);
           i--;
    } // Put the statement inside while loop into braces{}
    printf("That's it.\n");
    return 0;
}
