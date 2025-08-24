/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.


Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

/*
Subbmition by Pulkit Singh
Btech CS
5990022181
Batch - 12
*/

#include <stdio.h>

int main(){
    double r;
    printf("Enter radius \n");
    scanf("%lf",&r);
    printf("Area = %lf\n", 3.1415929*r*r);
    printf("Premeter = %.4lf\n", 3.1415929*r*2);
    return 0;
}
