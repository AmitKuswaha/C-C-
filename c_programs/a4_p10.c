/* 
   CH-230-A
   a4_p10.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
/* Declaring and defining function to multiply, divide, power and inverse */
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, 
                    float *invb) {

    *prod = (a * b); // Stores the product of floats
    *div = (a / b); // Stores the division of floats
    *pwr = (pow(a, b)); // Stores the power of float a to b
    *invb = (1 / b); // Stores the inverse of float b
} 

int main() {

    float num1, num2, ptr1, ptr2, ptr3, ptr4; // Declaring the variables

    /* Reading two floats */
    scanf("%f", &num1);
    scanf("%f", &num2);

    proddivpowinv(num1, num2, &ptr1, &ptr2, &ptr3, &ptr4);
        // Calls the function and modifies the value by reference

    printf("Product=%f Division=%f Power=%f Inverse=%f \n", 
            ptr1, ptr2, ptr3, ptr4);
        // Prints the modified value of the variables

    return 0;

}
