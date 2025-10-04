/*Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn


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
    int n,ct=0;
    printf("Enter String\n");

    fgets(str,sizeof(str),stdin);
    n=strlen(str);
    if ((n>0)&&(str[n-1]=='\n'))
    {
        str[n-1]='\0';
        n--;
    }

    int i=0;
    while (str[i]!='\0')
    {
        char ch=tolower(str[i]);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        i++;
        else
        {
        str[ct]=str[i];
        ct++;
        i++;
        }
    }

    str[ct]='\0';

    printf("%s",str);
    
    
    return 0;
}