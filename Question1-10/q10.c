/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

Subbmition by Pulkit Singh
Btech CS
5990022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter time in second");
    scanf("%d",&n);
    int hr=n/3600;
    n=n%3600;
    int min=n/60;
    n=n%60;

    printf("%02d:%02d:%02d",hr,min,n);
    return 0;
}