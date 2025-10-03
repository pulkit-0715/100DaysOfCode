/*Q90: Toggle case of each character in a string.


Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

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
    
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a'&&str[i]<='z')
        str[i]=str[i]-32;
        else if(str[i]>='A'&&str[i]<='Z')
        str[i]=str[i]+32;
        i++;
    }

    printf("%s",str);
    return 0;
}

