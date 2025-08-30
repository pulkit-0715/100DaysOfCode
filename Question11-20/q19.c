/*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene


Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter 3 sidess of triangle \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c)
    printf("Equilateral trianlge");
    else if(a==b||b==c||c==a)
    printf("Isosaceles triangle");
    else 
    printf("scalene");
    return 0;
}