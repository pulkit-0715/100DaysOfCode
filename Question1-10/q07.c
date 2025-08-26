/*
Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

/*
Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main() {
    int n, m;

    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);
    n+= m;
    m=n-m;
    n = n - m;

    printf("After swapp: %d %d\n", n, m);

    return 0;
}
