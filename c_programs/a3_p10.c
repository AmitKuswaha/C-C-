/* 
   CH-230-A
   a3_p10.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
/* Declaring the functions */ 
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main() {
    float f1, f2; // Declaring variables
    float *ptr1, *ptr2, *ptr3; // Declaring pointers
    ptr1 = 0;

    /* Reading the inputs */
    scanf("%f",&f1);
    scanf("%f",&f2);

    printf("The first function gives: %f\n", product(f1, f2));
        // Calls the function product and print the value
    
    productbyref(f1, f2, ptr1); // Calls the function productbyref

    ptr2 = &f1; // Points to f1
    ptr3 = &f2; // Points to f2
    modifybyref(ptr2, ptr3); // Calls the function modifybyref
    
    return 0;
}

/* Defining the functions */
float product(float a, float b) {

    float prod1 = a * b;
    return prod1; // Returns the value inside variable prod1
}

void productbyref(float a, float b, float *p) {

    float prod2 = a * b;
    p = &prod2; // Points to the variable prod2
    printf("The product is: %f\n", *p); 
        // Prints the value of variable pointer p 
}

void modifybyref(float *a, float *b) {

    *a = *a + 3; // Increases the value stored in pointer by 3
    *b = *b + 11; // Increases the value stored in pointer by 11
    printf("The new values are : %f %f\n ", *a, *b);
        // Prints the new value of variable pointer a and b
}
