/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

/*
Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    double c;
    printf("Enter temprature in celsius\n");
    scanf("%lf",&c);
    printf("Fahrenheit = %.2lf" ,((9.0/5) * c) + 32);

    return 0;
}
