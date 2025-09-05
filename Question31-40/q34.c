/*
Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int prime(int nn)
{
    if(nn<=1) return 0;
    if(nn<=3) return 1;

    if(nn%2==0||nn%3==0)
    return 0;

    for(int i=5;i*i<=nn;i+=6)
    {
        if(nn%i==0||nn%(i+2)==0)
        return 0;
    }
    return 1;
}

int main(){
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    if(prime(n))
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}