/*Q50: Write a program to print the following pattern:

*****
 ****
  ***
   **
    *


Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<i)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}