/* 
   CH-230-A
   a4_p6.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
void two_great(int *p, int d); // Declaring a function 

int main() {
   int* m, n; // Declaring some variables

   printf("Enter number of elements:\n");
   scanf("%d", &n); // Reads the number of elements

   m = (int*) malloc(sizeof(int) * n); // Allocating memory to the array
   if (m == NULL){ 
      exit(1); // Exits the program 
   } // Checks if the memory is valid or not
   
   printf("Enter the integers:\n");
   int i;
   /* Loops and reads the integers */
   for (i=0; i != n; i++) {
      scanf("%d", &m[i]); // Reads integers one by one
   }
   
   two_great(m, n); // Calls function two_great to print two greatest value

   free(m); // Releases the memory
   return 0;

}

/* Defining the function to print the two greatest value of an array */ 
void two_great(int *p, int e) {

   int i, d = 0;
   int w = p[0]; 
   for (i=0; i != e; i++) {
      if (w > p[i]) { // Checks if w is greater
         d = p[i]; // Assigns the lower value to d
         continue; // Continues the loop
      }
      else if (w < p[i]) { // Checks if w is smaller
         d = w; // Assigns the lower value to d
         w = p[i]; // Assigns the greater value to w
      }    
   } // Loops until each and every element are checked
printf("The two greatest integer are %d, %d\n", w, d);
   // Prints two greatest integer in an array
}
