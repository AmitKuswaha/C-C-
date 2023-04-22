/* 
   CH-230-A
   a5_p8.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
/* Declaring and defining the function to read the the matrix */
void rd_mtx(int *mtx1[], int u) {
   
   int i, j;
   for (i = 0; i != u; i++) {
      for (j = 0; j != u; j++) {
         scanf("%d", &mtx1[i][j]); // Reads value of matrix one by one
      }
   }
}

/* Declaring and defining the function to print the matrix */
void pt_mtx(int *mtx2[], int u) {

   int i, j;

   for (i = 0; i != u; i++) {
      for (j = 0; j != u; j++) {
         printf("%d ", mtx2[i][j]);
      } // Loops and prints a row of matrix
          printf("\n"); // Jumps a line for the next row
   } // Loops and prints a matrix 
}

/* Declaring and defingin the function to multiply two matrices*/
void prd_mtx(int *mtx1[], int *mtx2[], int *prd[], int c, int d) {
   
   int i, j, k;
   
   for (i = 0; i != c; i++) {
      for (j = 0; j != d; j++) {
         prd[i][j] = 0;
         for (k = 0; k != d; k++) {
         prd[i][j] += (mtx1[i][j] * mtx2[j][k]);           
         } 
            printf("%d ", prd[i][j]);
      } // Loops and prints a row of matrix
      printf("\n"); // Jumps a line for the next row 
   } // Loops and prints a matrix
}

/* Declaring and defining the function to release the memory of array*/
void free_arr(int *arr[], int u) {
int i;
for (i = 0; i != u; i++) {
   free(arr[i]);
}
free (arr);
}


int main() {

   int **fst, **snd, **res; //Declaring the matrices 
  
   /* Reading the size of matrices */
   int n, m, p;
   scanf("%d", &n);
   scanf("%d", &m);
   scanf("%d", &p);

   /* Allocating the memory to the first matrix*/
   fst = (int**) malloc(sizeof(int*) * n);
   if (fst == NULL) {
      exit(1); // if malloc fails
   }
   int i;
   for (i = 0; i != n; i++) {
      fst[i] = (int*) malloc(sizeof(int) * n);
      if ( fst[i] == NULL) {
         exit(1); // if malloc fails
      }  
   } 

   /* Allocating the memory to the second matrix*/
   snd = (int**) malloc(sizeof(int*) * m);
   if (snd == NULL) {
      exit(1); // if malloc fails
   }
   int j;
   for (j = 0; j != n; j++) {
      snd[j] = (int*) malloc(sizeof(int) * m);
      if ( snd[j] == NULL) {
         exit(1); // if malloc fails
      }  
   }

   /* Allocating the memory to the product matrix*/
   res = (int**) malloc(sizeof(int*) * p);
   if (res == NULL) {
      exit(1); // if malloc fails
   }
   int k;
   for (k = 0; k != n; k++) {
      res[k] = (int*) malloc(sizeof(int) * p);
      if ( res[k] == NULL) {
         exit(1); // if malloc fails
      }  
   }

   /* Calling the function to read the values of matrices*/
   rd_mtx(fst, n);
   rd_mtx(snd, m);

   /* Calling the function to print the matrices*/
   printf("Matrix A:\n");
   pt_mtx(fst, n);
   printf("Matrix B:\n");
   pt_mtx(snd, m);  

   printf("The multiplication result AxB:\n");
   prd_mtx(fst, snd, res, n, p);
      // Calls function to multiply the matrices and print it
  
   /* Calling function to release the memory */
   free_arr(fst, n);
   free_arr(snd, m);
   free_arr(res, p);
   return 0;

}
