/* 
   CH-230-A
   a4_p3.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

/* Declaring some functions */
float geometric_mean(float arr[], int num); // Calculates geometric mean
float highest(float arr[], int num); // Finds out the highest number
float lowest(float arr[], int num); // Finds out the lowest number
float all_sum(float arr[], int num); //  Calculates sum of the inputs

int main() {

    float a[15]; // Declaring variables

    int i, c = 0;
    printf("Enter positive numbers:\n");
    
    /* Reading 15 positive numbers */
    for (i=0; i != 15; i++) {    

        scanf("%f", &a[i]); // Reading each numbers
        c++; // Counting the input
        
        /* Checking if the input is positive or not */
        if (a[i] < 0 ) {
            c = c - 1; // Decreasing total inputs by 1
            break; // Ends the loop
        }
    }
        
    char ch;
    printf("Enter a character:\n");
    getchar();
    scanf("%c", &ch); // Reading a character

    switch (ch) {
        case 'm': // Executes when character is m
            printf("The geometric mean is: %f", geometric_mean(a, c));
                // Calls function geometric_mean and prints the value
        break;

        case 'h': // Executes when character is h
            printf("The highest number is: %f", highest(a, c));
                // Calls function highest and prints the value
        break;

        case 'l': // Executes when character is l
            printf("The smallest number is: %f", lowest(a, c));
                // Calls function lowest and prints the value
        break;

        case 's': // Executes when character is s
            printf("The sum of all number is: %f", all_sum(a, c));
                // Calls function all_sum and prints the value
        break;
    }
    return 0;
}

/* Defining the functions */
float geometric_mean(float arr[], int num) {

    int w;
    float u = 1.0 / num;
    float gmean = pow(arr[0], u);
        // Assigning first value of array into gmean

    /* Loops until the last value inside array */
    for (w = 1; w != num; w++) {
        gmean = gmean * pow(arr[w], u);
            // calls pow to calculate the power
            // Operates and stores the mean
    }
    return gmean; // Returns the geometric mean
}

float highest(float arr[], int num) {

    int w;
    float h = arr[0];
        // Assigning first value of array into h

    /* Loops until the last value inside array */
    for (w = 1; w != num; w++) {
        if (h > arr[w]) {
            continue; // Continues the loop
        }
        else if (h < arr[w]) {
            h = arr[w]; // Stores the bigger number to h
        }
    }
    return h; // Returns the highest number
}

float lowest(float arr[], int num) {

    int w;
    float l = arr[0];
        // Assingning first value of array into l

    /* Loops until the last value inside array */
    for (w = 1; w != num; w++) {
        if (l < arr[w]) {
            continue; // Continues the loop
        }
        else if (l > arr[w]) {
            l = arr[w]; // Stores the smaller number to l
        }
    }
    return l; // Returns the lowest number
}

float all_sum(float arr[], int num) {

    int w; 
    float sum = 0;

    /* Loops until the last value of array */
    for (w = 0; w != num; w++) {
        sum = sum + arr[w]; // Adds all the numbers
    }
    return sum; // Returns the sum of numbers
}
