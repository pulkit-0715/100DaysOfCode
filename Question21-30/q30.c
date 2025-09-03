/*Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    long n,rev=0;
    printf("Enter the number to be reversed\n");
    scanf("%ld",&n);
    while (n!=0)
    {
        rev= rev*10+(n%10);
        n/=10;
    }
    printf("Reversed: %ld",rev);

    return 0;
}