/* 
   CH-230-A
   a4_p7.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
/* Declaring the functions */
void matrix(int k[30][30], int u);
void main_diagonal(int k[30][30], int u);

int main() {

    /* Declaring the variables */
    int matx[30][30]; 
    int n, i, j;

    scanf("%d", &n); // Reads an integer representing rows and column

    /* Loops and reads all the values of matrix */
    for (i = 0; i != n; i++) {
        for (j = 0; j != n; j++) {
            scanf("%d", &matx[i][j]); // Reads value of matrix one by one
        }
    }

    matrix(matx, n); 
        // Calls funtion to print matrix
    main_diagonal(matx, n);
        // Calls function to print elements under main diagonal
    return 0;
}

/* Defining function to print a matrix */ 
void matrix(int k[30][30], int u) {

    int i, j;
    printf("The entered matrix is:\n");

    for (i = 0; i != u; i++) {
        for (j = 0; j != u; j++) {
            printf("%d ", k[i][j]);
        } // Loops and prints a row of matrix
            printf("\n"); // Jumps a line for the next row
    } // Loops and prints a matrix 
}

/* Defining a function to print elements under main diagonal */
void main_diagonal(int k[30][30], int u) {
    int i, j;
    printf("Under the main diagonal:\n");

    for (i = 1; i != u; i++) {
        for (j = 0; j != ( u - 1 ); j++) {
            if (i > j) {
            printf("%d ", k[i][j]);
            } // Prints only if row is greater than column
        } // Loops for all column except last one
    } // Loops for all rows except first one
    printf("\n");
}

