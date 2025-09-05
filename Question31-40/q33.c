/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include <math.h>
int main(){
    int n,temp,digits=0,arm=0;
    printf("Enter Numnber\n");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        digits++;
        temp/=10;
    }
    temp=n;

    while (temp!=0)
    {
        int d=temp%10;
        arm=arm+ (int)pow(d,digits);
        temp/=10;
    }
    if(arm==n)
        printf("Armstrong number");
    else
        printf("Not Armstrong");
    return 0;
}