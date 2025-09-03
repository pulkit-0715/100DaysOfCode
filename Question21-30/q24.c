/*
Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700


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
