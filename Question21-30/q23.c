/*Q23: Write a program to calculate a library fine based on late days.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int days,fine;
    printf("Enter Number of days\n");
    scanf("%d",&days);
    if(days<5)
        fine = 2*days;
    else if(days>=5&&days<10)
        fine = 4*days;
    else if (days>=10&&days<15)
        fine = days*4;
    else if(days>=15&&days<20)
        fine = 6*days;
    else if(days>=20&&days<25)
        fine =days*8;
    else if(days>=25&&days<30)
        fine = days*10;
    else
      {printf("Member Ship cancelled\n");
        printf("Fine is %d",days*20);
        return 0;
    }  

    printf("Fine = %d" ,fine);
    
    return 0;
}