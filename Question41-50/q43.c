/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int getfact(int a)
{   
    if(a==0)
    return 1;
    else
    return a*getfact(a-1);
}

int main(){
    int num ,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    int temp =num;
    if(num<0)
    {
        printf("Number should be positive");
        return 0;
    }
    else
    {
    while (num!=0)
    {
        sum+=getfact(num%10);
        num/=10;
    }

    if(sum==temp)
    printf("Is strong");
    else
    printf("not strong");
    }
    return 0;
}