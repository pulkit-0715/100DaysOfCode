/*Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    printf("Enter string\n");
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);

    if((str[n-1]='\n')&&(n>0))
    {
        str[n-1]='\0';n--;
    }
    int i =0;
    while(str[i]!='\0')
    {
        if(str[i]==' ' )
        str[i]='-';
        i++;
    }

    printf("\n%s",str);
    return 0;
}