/*Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    int a,sum=0;
    printf("Enter the nth tearm\n");
    scanf("%d",&a);
    for(int i =1;i<=a;i+=2)
    {
        sum+=i;
    }

    printf("Sum is: %d",sum);
    return 0;
}