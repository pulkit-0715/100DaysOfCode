/*Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int a,prod=1;
    printf("Enter the nth teearm\n");
    scanf("%d",&a);
    for(int i =2;i<=a;i+=2)
    {
        prod*=i;
    }
    printf("Product is :%d",prod);

    return 0;
}