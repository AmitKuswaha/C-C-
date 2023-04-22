/* 
   CH-230-A
   a2_p6.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/ 

#include <stdio.h>

int main() {

    double x, y; // Declaring two variables

    scanf("%lf %lf", &x, &y); // Reads two doubles
   
    double *ptr_one, *ptr_two, *ptr_three; // Defining three pointers

    ptr_one = &x; // Make the pointer points to x
    ptr_two = &x; // Make the pointer points to x
    ptr_three = &y; // Make the pointer points to y

    /* Printing the output */
    printf("The address of ptr_one =%p\n", ptr_one);
    printf("The address of ptr_two =%p\n", ptr_two);
    printf("The address of ptr_three =%p\n", ptr_three);
    return 0;
}
