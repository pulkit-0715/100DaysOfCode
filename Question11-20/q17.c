/*
Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include <math.h>


int main(){
    float a,b,c;
    printf("Enter value to a,b,c \n");
    scanf("%f %f %f",&a,&b,&c);
    float d=((b*b)-4*a*c);
    if(d==0)
    {
        float r=(-b+sqrt(d))/(2*a);
        printf("Roots are real and same :%.0f",r);
        
    }
    else if(d>0)
    {
        float r1=(-b+sqrt(d))/(2*a);
        float r2=(-b-sqrt(d))/(2*a); 
        printf("Roots are real and differen:%.0f , %.0f ",r1,r2);   
    }
    else 
    {
        printf("Roots are complex");
    }
    return 0;
}