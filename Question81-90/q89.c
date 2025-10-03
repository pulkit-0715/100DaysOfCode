/*Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char str[1000];
    printf("Enter string\n");
    fgets(str,sizeof(str),stdin);
    int n= strlen(str);
    if((n>0 )&& (str[n-1]=='\n'))
    {
        str[n-1]='\0';
        n--;
    }

    char ch;
    printf("Enter char to find frequency of a letter\n");
    scanf("%c",&ch);
    ch=tolower(ch);
    

    int i=0,ct=0;
    while (str[i]!='\0')
    {
        
        if(tolower(str[i++])==ch)
        ct++;
    }
    printf("Frequency:%d",ct);

    return 0;
}