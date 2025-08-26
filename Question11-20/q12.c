/*
Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12

*/

#include <stdio.h>

int main(){
    int a;
    printf("Enter a no to check if its positive ,negative or zero");
    scanf("%d",&a);
    if(a==0)
    printf("Zero");

    else if(a>0)
    printf("Positive");

    else
    printf("Negative");


    return 0;
}
