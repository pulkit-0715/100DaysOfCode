/*Q92: Find the first repeating lowercase alphabet in a string.


Sample Test Cases:
Input 1:
stress
Output 1:
s


Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[1000];
    int n;
    printf("Enter String\n");

    fgets(str,sizeof(str),stdin);
    n=strlen(str);
    if ((n>0)&&(str[n-1]=='\n'))
    {
        str[n-1]='\0';
        n--;
    }

    int i =1;
    while (str[i]!='\0')
    {
        if(str[i-1]==str[i])
        {
            printf("Repeated: %c",str[i]);
            return 0;
        }
        i++;
    }

    printf("No char repeated");
    
    return 0;
}