/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main(){
    int a,b;
    char ch;
    printf("Enter 2 number and an operator\n");
    scanf("%d %d %c",&a,&b,&ch);
   

    switch (ch)
    {
    case '+':
       printf("Sum is: %d",a+b);
        break;
    case '-':
        printf("Difference is %d",a-b);
        break;
     case '/':
        printf("Quotient is %.2f", (1.0*a)/(b));
        break;
     case '*':
        printf("Product is: %d",a*b);
        break;
     case '%':
        printf("Reminder is: %d",a%b);
        break;
    
    default:
        printf("Enter a valid operation");
        break;
    }

    return 0;
}