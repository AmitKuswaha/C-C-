/* 
   CH-230-A
   a5_p6.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>

int main() {
   
   float p[100]; // Declaring an array of floats

   int n; 
   scanf("%d", &n); // Reading the number of components in array

   int i;
   for (i = 0; i != n; i++) {

      scanf("%f", &p[i]);
   } // Loops and reads all the components of the array

   float* arr = &p[0]; // set a pointer p to first element of array

   while ((*arr - *p) <= n) { 

      if (*arr < 0) { // arr is the pointer to the negative value
         break; // break out of loop when first negative value appears
      }
      arr++;
   } // do until the last element of array
   int c = arr - p; // p is a pointer to first element of array
   printf("Before the first negative value: %d elements\n", c );

   return 0;
}

