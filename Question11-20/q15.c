/*
Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("Upper case");
    else if(ch>=97&&ch<=122)
    printf("Lower case");
    else 
    printf("Special character");
    return 0;
}