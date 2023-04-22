/* 
   CH-230-A
   a5_p2.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
/* Declaring and defining a function  to print the float divided by 5 */
void divby5(float arr[], int size) {

    int i;
    printf("\nAfter:\n");
    for (i = 0; i != size; i++) {
        float div = arr[i] / 5.0; // Divide each number of array by 5
        printf("%.3f ", div);
            // Prints the floating value with only three decimals 
    } // Loops and prints each divided number
    printf("\n");
}

int main() {

    float nums[6] = {5.500, 6.500, 7.750, 8.000, 9.600, 10.360};
        // Storing some values inside an array
    int b;
    printf("Before:\n");
    for (b = 0; b != 6; b++) {
        printf("%.3f ", nums[b]);
    } // Loops and prints each number with only three decimals
    divby5(nums, 6); // Calls funciton divby5 to print divided values
    return 0;
}
