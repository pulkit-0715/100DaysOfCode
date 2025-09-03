/*Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n>=0)
    {
    int prod=1;
    for(int i=1;i<=n;i++)
    {
        prod*=i;
    }
    printf("factorial is %d",prod);
    }
    else
    printf("Factorial od negative numbers is not possible");

    return 0;
}
