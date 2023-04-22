/* 
   CH-230-A
   a2_p1.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/   



#include <stdio.h>

int main() {
    
    /* Declaring the variables */
    char line [20];
    double number1, number2;
    int number3; 
    int number4;
    char letter1, letter2;
    
    /* Reading the input */
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%lf", &number1);
    
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%lf", &number2);

    fgets (line, sizeof(line), stdin);
    sscanf (line, "%d", &number3);
   
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%d", &number4);

    fgets (line, sizeof(line), stdin);
    sscanf (line, "%c", &letter1);
    
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%c", &letter2);

    /* Operating and printing the output */
    double sum_double = number1 + number2; // Adding the doubles 
    double difference_double = number1 - number2; // Subtracting the doubles
    printf("sum of doubles=%lf\n", sum_double);
    printf("difference of doubles=%lf\n", difference_double);
    double square = number1 * number1; // Squaring first double
    printf("square=%lf\n", square);

    int sum_int = number3 + number4; // Adding the integers
    int product_int = number3 * number4; // Multiplying the integers
    printf ("sum of integers=%d\n", sum_int);
    printf ("product of integers=%d\n", product_int);

    int sum_char = letter1 + letter2; // Adding the characters
    int product_char = letter1 * letter2; // Multiplying the characters
    printf ("sum of chars=%d\n", sum_char);
    printf ("product of chars=%d\n", product_char);
    printf ("sum of chars=%c\n", sum_char);
    printf ("product of chars=%c\n", product_char);
    return 0;
}