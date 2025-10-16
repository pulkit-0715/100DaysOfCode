/*
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>
int pvoitsum(int a){
    int totalsum=(a*(a+1))/2;
    int lhs=0;
    for(int i=1;i<=a;i++)
    {
        int rhs=totalsum-lhs-i;
        if(rhs==lhs)
        {return i;}
        lhs+=i;
    }

    return -1;
}
int main(){
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    printf("Pvoit at %d",pvoitsum(n));
    return 0;
}