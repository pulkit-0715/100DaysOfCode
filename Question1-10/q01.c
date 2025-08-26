/*
Q1: Write a program to input two numbers and display their sum.

Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19
*/

/*
Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main()
{
   double a, b;
   printf("Enter two numbers\n");
    scanf("%lf %lf", &a, &b);

    printf("Sum = %lf\n", a + b);

    return 0;
}
