/* 
   CH-230-A
   a6_p1.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

#include <stdio.h>

//defining a macro for swapping values
#define SWAP(x, y, type) {type z; z = x; x = y; y = z;}

int main(){
    
    int a, b;
    double i, j;
    
    //scanning two integers
    scanf("%d", &a);
    scanf("%d", &b);
    
    //scanning two doubles
    scanf("%lf", &i);
    scanf("%lf", &j);
    
    printf("After swapping:\n");
    
    SWAP(a, b, int);//calling the macro
    printf("%d\n%d\n", a , b);//printing the swapped integers
    
    SWAP(i, j, double);//calling the macro
    printf("%lf\n%lf\n", i , j);//printing the swapped doubles
    
    return 0;
    
}
