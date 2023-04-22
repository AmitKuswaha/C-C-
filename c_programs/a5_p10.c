/* 
   CH-230-A
   a5_p10.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
/* Declaring and defining a recursive function to print n to 1*/
void rtn_one(int n) {

    if (n >= 1) {
        printf("%d\n", n);
        rtn_one(n-1); // Calls the function
    }
}

int main() {

    int num; // Declaring a variable
    scanf("%d", &num); // Reading the input
    rtn_one(num); // Calling the function to print the values
    return 0;
}
