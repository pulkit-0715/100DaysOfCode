/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_num() {
    int num = (rand() % 7) + 1;
    return num;
}

int main() {
    srand(time(0));

    int n;
    printf("Enter number of next line: ");
    scanf("%d", &n);

    while(n > 0) {
        int ram = random_num();

        for(int i = 0; i < ram; i++)
            printf("*\n");

        printf("\n"); 
        --n;
    }
}
