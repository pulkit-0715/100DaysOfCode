/*Q47: Write a program to print the following pattern:
*
**
***
****
*****

Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++ )
    {
        for(int j =1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}