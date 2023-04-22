/* 
   CH-230-A
   a5_p4.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
/* Declaring and defining a function  to print the float divided by 5 */
void divby5(float arr[], int size) {

    int i;
    printf("\nAfter:\n");
    for (i = 0; i != size; i++) {
        float div = arr[i] / 5.0; // Divide each number of array by 5
        printf("%.3f ", div);
            // Prints the floating value with only three decimals 
    } // Loops and prints each divided number
}

int main() {
    
    float *nums; // Declalring an array
    int n;
    printf("Enter the size of array:\n");
    scanf("%d", &n); // Reads the size of array
    nums = (float*) malloc(sizeof(float) * n); // Allocating memory to array
    if (nums == NULL) {
        exit(1); // Exits the program
    }
    int j;
    printf("Enter %d values:\n", n);
    for (j = 0; j != n; j++) {
        scanf("%f", &nums[j]); // Reads a floating value
    } // Loops and reads n number of values
    
    divby5(nums, n); // Calls funciton divby5 to print divided values
    free(nums);
    return 0;
}
