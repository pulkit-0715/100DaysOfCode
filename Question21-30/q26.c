
/*
Q26: Write a program to print numbers from 1 to n.

Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    printf(" %d",i);

    return 0;
}