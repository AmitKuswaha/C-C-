/* 
   CH-230-A
   a5_p5.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
/* Declaring the functions */
double scr_prod(double v1[], double v2[], int num);
void pos_small(double v[], int num);
void pos_large(double v[], int num);
void input(double v[], int num);

int main() {

   double arr1[50], arr2[50]; // Declaring the arrays to store vectors
   
   int n;
   scanf("%d", &n); // Reads the number of components of vector

   input(arr1, n);
      // Calls the function input and reads the components of first vector

   input(arr2, n);
      // Calls the function input and reads the components of second vector

   printf("Scalar product=%lf\n", scr_prod(arr1, arr2, n));
      // Calls the funciton scr_prod and prints the value

   /* Calling the function pos_small and pos_large for each vectors */
   pos_small(arr1, n); // Prints smallest component and its postion
   pos_large(arr1, n); // Prints largest component and its position
   pos_small(arr2, n);
   pos_large(arr2, n);
   return 0;
}

/* Declaring the funtions */

double scr_prod(double v1[], double v2[], int num) {
   int p; 
   double product = 0;
   for (p = 0; p != num; p++) {
      product = product + (v1[p] * v2[p]); 
         // Operating and storing scalar product
   } // Loops until the last component of vector
   return product; // Retuns the scalar product
} // Function to return the scalar product of two vectors

void pos_large(double v[], int num) {

   int p, q;
   double h = v[0];
   for (p = 0; p != num; p++) {
      if (h < v[p]) {
         h = v[p]; 
      } // Checks and stores the largest component
   } // Loops till the last component of vector

   for (q = 0; v[q] != h ; q++) {
   
   } // Loops until the largest component of vector

   printf("The largest = %lf\n", h); // Prints the largest component
   printf("Position of largest = %d\n", q); // Prints the position of largest
} // Function to print the largest component and its position

void pos_small(double v[], int num) {
   
   int p, q;
   double l = v[0];
   for (p = 0; p != num; p++) {
      if (l > v[p]) {
            l = v[p];
      } // Chceks and stores the smallest component
   } // Loops till the last component of vector

   for (q = 0; v[q] != l ; q++) {
   
   } // Loops until the smallest component of vector
   printf("The smallest = %lf\n", l); // Prints the smallest component
   printf("Position of smallest = %d\n", q); // Prints the positon of smallest
} // Funtion to print the smallest component and its position

void input(double v[], int num) {
   
   int p;
   for (p = 0; p != num; p++) {
      scanf("%lf", &v[p]); // Reads each component
   } // Loops until the end of array
} // Function to read the components of vector
