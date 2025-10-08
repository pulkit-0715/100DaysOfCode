/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    char mon[4];   
    printf("Enter date in format of DD/MM/YYYY\n");
    fgets(str,sizeof(str),stdin);

    int n = strlen(str);
    if(n > 0 && (str[n - 1] == '\n'))  
    {
        str[n - 1] = '\0';
        n--;
    }


    int nn = (str[3] - '0') * 10 + (str[4] - '0');

    switch (nn)
    {
    case 1:  mon[0]='J'; mon[1]='a'; mon[2]='n'; break;
    case 2:  mon[0]='F'; mon[1]='e'; mon[2]='b'; break;
    case 3:  mon[0]='M'; mon[1]='a'; mon[2]='r'; break;
    case 4:  mon[0]='A'; mon[1]='p'; mon[2]='r'; break;
    case 5:  mon[0]='M'; mon[1]='a'; mon[2]='y'; break;
    case 6:  mon[0]='J'; mon[1]='u'; mon[2]='n'; break;
    case 7:  mon[0]='J'; mon[1]='u'; mon[2]='l'; break;
    case 8:  mon[0]='A'; mon[1]='u'; mon[2]='g'; break;
    case 9:  mon[0]='S'; mon[1]='e'; mon[2]='p'; break;
    case 10: mon[0]='O'; mon[1]='c'; mon[2]='t'; break;
    case 11: mon[0]='N'; mon[1]='o'; mon[2]='v'; break;
    case 12: mon[0]='D'; mon[1]='e'; mon[2]='c'; break;
    default:
        printf("Invalid month");
        return 1;
    }

    str[2] = '-';

   
    int i = n;            
    str[n + 2] = '\0';    
    while(i >= 6)
    {
        str[i + 1] = str[i];   
        i--;
    }

    str[3] = mon[0];
    str[4] = mon[1];
    str[5] = mon[2];
    str[6] = '-';

    printf("\n%s\n", str);
    return 0;
}
