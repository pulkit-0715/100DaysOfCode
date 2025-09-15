/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main() {
    int n ;
    printf("Enter a odd number");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) 
    {
        if (i <= (n/2 + 1)) 
        {
            for (int j = 1; j <= 2*i - 1; j++) 
                printf("*");
        } 
        
        else 
        {
            for (int j = 1; j <= 2*(n - i) + 1; j++) 
                printf("*");   
        }
        printf("\n");
    }

    return 0;
}
