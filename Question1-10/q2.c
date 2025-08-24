/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
/*
Subbmition by Pulkit Singh
Btech CS
5990022181
Batch - 12
*/

#include <stdio.h>
int main(){
       int a, b;
       printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Diff= %d\n", a - b);
    printf("Product = %d\n", a * b);
    if(b==0)
    {
        printf("Error , divisor can not be zero");
        return 0;
    }
    else 
    printf("Quotient = %d\n", a /b);

    return 0;
    return 0;
}