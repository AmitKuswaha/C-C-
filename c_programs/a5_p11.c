/* 
   CH-230-A
   a5_p11.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
/* Declaring and defining a function to determine prime numbers*/
int rtn_ptn(int num, int i) {

    if (i == 1) {
        return 1;
    }
    else if (num % i == 0) {
        return 0;
    }
    else {
        return rtn_ptn(num, i - 1); // Calls the function again
    }       
}

int main() {

    int n; // Declaring a variable
    scanf("%d", &n); // Reading an input
    if (n == 1) {
        printf("1 is not prime\n");
    }
    else {
        int p = rtn_ptn(n, n / 2);
            // Calling function rtn_ptn and storing the value
        if (p == 1) {
            printf("%d is prime\n", n);
        }
        else {
            printf("%d is not prime\n", n);
        } 
    } // Checking and printing if the number is prime or not
    return 0;
}
