/* 
   CH-230-A
   a5_p3.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>
/* Declaring and defining a function to count lowercase character */
int count_lower(char* str) {
    int i;
    int c = 0;
    for (i = 0; str[i] != '\n'; i++) {
        if ((int)str[i] >= 97 && (int)str[i] <= 122) {
            c++;
        }
    }
    return c;

}

int main() {
   
   char arr[50]; // Declaring an array
   fgets(arr, 50, stdin); // Reads a string
   while (arr[0] != '\n') {
        printf("The total nubmer of lowercase character is %d\n", 
                count_lower(arr));
            // Calls the function count_lower and prints the value returned
        fgets(arr, 50, stdin); // Reads another string
   } // Loops until string is empty
   return 0;
}
