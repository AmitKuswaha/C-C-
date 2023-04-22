/* 
   CH-230-A
   a2_p5.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/ 

#include <stdio.h>

int main() {

    int a; // Declaring a varible

    scanf("%d", &a); // Reads an integer
    printf("The interger is %d\n", a);
 
    int *ptr_a; // Defining a pointer 
    ptr_a = &a; // Make the pointer points to a
    printf("The address of the integer is %p\n", ptr_a);

    *ptr_a = *ptr_a + 5; // Increases the variable by 5
    printf("The modified value is %d\n", a);
    printf("The new address is %p\n", &a);
    return 0;
}
