/*Q24: Write a program to calculate an electricity bill based on units consumed.

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    float unit,bill;
    printf("Enter units\n");
    scanf("%f",&unit);
    if(unit<=100)
    bill=5*unit;
    else if(unit>100 && unit<200)
    bill= 500+((unit-100)*7);
    else
    bill = 500+700+((unit-200)*10);

    printf("Bill: %.0f",bill);
    return 0;
}
