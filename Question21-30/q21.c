
/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.
\
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter number from 1-12\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("January, 31 days\n");
        break;

    case 2:
        printf("February, 28days\n");
        break;
    
    case 3:
        printf("March ,31 days\n");
        break;
    
    case 4:
        printf("April,30days\n");
        break;
    
    case 5:
        printf("May, 31 days\n");
        break;
    
    case 6:
        printf("June,30days\n");
        break;

    case 7:
        printf("July, 31days\n");
        break;
    case 8:
        printf("August, 31 days\n");
        break;

    case 9:
        printf("September, 30 days\n");
        break;

    case 10:
        printf("October , 31 days\n");
        break;
    case 11:
        printf("November , 30 days\n");
        break;

    case 12:
        printf("December, 31 days\n");
        break;
    default:
    printf("There are only 12 months\n");
        break;
    }
    return 0;
}