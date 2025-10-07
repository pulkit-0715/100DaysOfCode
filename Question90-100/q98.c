/*Q98: Print initials of a name with the surname displayed in full.


Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[1000];
     printf("Enter String\n");
    fgets(str,1000,stdin);
    int n=strlen(str);
    if(n>0 && (str[n-1]==' '))
    {
        str[n-1]='\0';
        n--;
    }
    
    
    int i=0,j=n-1;

    while(str[i]==' ')
    i++;
    printf("%c.",str[i]);
    while(str[j]==' ')
    j--;

    while (str[j]!=' ')
        j--;
    
    while(i<j)
    {
        if(str[i]==' ' && (isalpha(str[i+1])))
        printf("%c.",str[i+1]);
        i++;
    }
    printf(" ");
    j++;
    while(str[j]!='\0')
    printf("%c",str[j++]);


    
    return 0;
}