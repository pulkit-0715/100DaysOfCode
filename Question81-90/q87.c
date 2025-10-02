/*
Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

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
    printf("Enter string\n");
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    
    if((str[n-1]=='\n') && (n>0)){
    str[n-1]='\0';
    --n;
}
    int i=0,space=0,digit=0,special=0;

    while(str[i]!='\0'){
        char ch = tolower(str[i]);
        if(str[i]==' ')
        space++;
        else if(str[i]>=48 && str[i]<=57)
        digit++;
        else if(ch>=97&&ch<=122)
        {

        }
        else
        special++;

        i++;
    }
    
    printf("Spcaes=%d Digits=%d, Special=%d",space,digit,special);
    return 0;
}