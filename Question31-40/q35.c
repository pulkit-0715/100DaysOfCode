/*Q35: Write a program to print all factors of a given number.

Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/


#include <stdio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int k =n;
    printf("Factorial are:\n");
    if(k<0)
     k =-k;

    for(int i =1;i<=k;i++)
    {
        if(n>=0)
        {
        if(k%i==0)
        printf("%d ",i);
        }

        else
        {
         if(k%i==0)
        printf("-%d ",i);   
        }
    }    return 0;  
}