/* 
   CH-230-A
   a5_p9.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
/* Declaring and defining a function to read the 3D array*/
void rd_arr(int **arr[], int u, int v, int w) {

    int i, j, k;
    for (i = 0; i != u; i++) {
        for (j = 0; j != v; j++) {
            for (k = 0; k != w; k++){
                scanf("%d", &arr[i][j][k]); // Reads each element of the array
            }
        }
    }
}

/* Declaring a function to print sections parallel to XOY axis */ 
void prt_arr(int **arr[], int u, int v, int w)
    /* to print sections parallel to XOY axis */ 
{
    int i, j, k;
    for ( k = 0; k != w; k++)
    {
        printf("Section %d:\n", k+1);
        for ( i = 0; i != u; i++)
        {
            for ( j = 0; j != v; j++)
            {
                printf("%d ", arr[i][j][k]); /* prints all (i,j) for given k */
            }
            printf("\n");       /* new line after each column */
        }
    }   
}

int main () {

    int ***a; // Declaring a 3D array
    /* Reading the input for row, column and depth */
    int row, col, dep;
    scanf("%d", &row);
    scanf("%d", &col);
    scanf("%d", &dep);

    /* Allocating the memory of the array */
    a = (int***) malloc(sizeof(int**) * row); // Memory of the row
    if (a == NULL) {
        exit(1); // if malloc fails
    }
    int i, j;
    for (i = 0; i != col; i++) {
        a[i] = (int**) malloc(sizeof(int*) * col); // Memory of the column
        if (a[i] == NULL) {
            exit(1); // if malloc fails
        }
        for (j = 0; j != dep; j++) {
            a[i][j] = (int*) malloc(sizeof(int) * dep); // Memory of the depth
            if (a[i][j] == NULL) { 
                exit(1); // if malloc fails
            }
        }
    }

    rd_arr(a, row, col, dep); // Calling function to read the 3D array
    prt_arr(a, row, col, dep); // Calling function to print 2D sections

    for ( i = 0; i < row; i++) /* Deallocating the memory of 3D array*/
    {
        for ( j = 0; j < col; j++)
        {
            free (a[i][j]);
        }
        free(a[i]);
    }
    free(a);
    return 0;
}

