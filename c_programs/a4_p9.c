/* 
   CH-230-A
   a4_p9.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n); // Declaring a function

int main() {
    int *arr; // Declaring the variables
    int n;

    printf("Enter the number of integers:\n");
    scanf("%d", &n); // Reads the size of array
    arr = (int*)(malloc(sizeof(int) * n)); // Allocate the size of array
    if (arr == NULL){ 
      exit(1); // Exits the program 
    } // Checks if the memory is valid or not

    printf("Enter %d integers:\n", n);
    int i;
    /* Loops and reads all the value inside array */
    for (i = 0; i != n; i++) {
        scanf("%d", &arr[i]); // Read each value one by one
    }

    printf("The product of highest and lowest is %d\n", prodminmax(arr, n));
        // Calls the function prodminmax and prints the value
    free(arr); // Releases the memory of array
    return 0;

}

/* Defining function to return product of minimum and maximum */
int prodminmax(int arr[], int n) {
    int w;
    int l = arr[0];
    int h = arr[0];
     /* Loops until the last value inside array */
    for (w = 1; w != n; w++) {
        if (l < arr[w]) {
            continue; // Continues the loop
        }
        else if (l > arr[w]) {
            l = arr[w]; // Stores the smaller number to l
        }
    }
     /* Loops until the last value inside array */
    for (w = 1; w != n; w++) {
        if (h > arr[w]) {
            continue; // Continues the loop
        }
        else if (h < arr[w]) {
            h = arr[w]; // Stores the bigger number to h
        }
    }
    int prod = l * h; 
    return prod; // Returns the product of maximum and minimum
}
