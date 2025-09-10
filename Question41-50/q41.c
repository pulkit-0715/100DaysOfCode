/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    
    if (n < 10) {
        printf("Result: %d\n", n);
        return 0;
    }

   
    int temp = n;
    int digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    
    int powerOf10 = (int)pow(10, digits - 1); 

    int firstDigit = n / powerOf10;          
    int lastDigit = n % 10;                  

   
    int middlePart = n % powerOf10;          
    middlePart = middlePart / 10;            

    int swappedNum = (lastDigit * powerOf10) + (middlePart * 10) + firstDigit;

    printf("Result: %d\n", swappedNum);

    return 0;
}