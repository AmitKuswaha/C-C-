/*
   CH-230-A
   a1_p3.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/  
/*
  The program didn't compile because of various errors.
  Inappropriate declaration of library,
  and inappropriate specifier is used inside printf function.
  
  To fix the errors and print correct value,
  I rectified the syntax of header,
  Changed int datatype to float,
  And replaced int specifier with float in the printf function.  
*/

#include <stdio.h> /* Rectified the syntax */

int main() {
    
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5; /* Changed the datatype */
    result = a / b;
    printf("The result is %f\n", result); /* Rectified the specifier */
    return 0;
}