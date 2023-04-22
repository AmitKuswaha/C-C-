/* 
   CH-230-A
   a3_p3.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
float convert(int cm); // Declaring a function

int main () {

   /* Declaring the variables */  
   int a;
   float b;

   scanf("%d", &a); // Reads the input
     
   b = convert(a); // Calls the function and stores in b

   printf("Result of conversion: %f\n", b);
   
return 0;
}

float convert(int cm) { // Defining the function to convert cm to km
    float km = (float)cm / 100000; // converts cm to km
    return km;
}


   

