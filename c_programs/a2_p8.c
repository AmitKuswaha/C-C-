/* 
   CH-230-A
   a2_p8.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>

int main () {

    int a;
    scanf("%d", &a); // Reading an interger

   /* Checking if the integer is divisible by 2 and 7 */
    if ( ( a % 2 == 0 ) && ( a % 7 == 0) ) { 
        printf("The number is divisible by 2 and 7\n"); 
    }     
    else {
        printf("The number is NOT divisible by 2 and 7\n");    
    }
    return 0;
}
