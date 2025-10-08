/*Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    int n=0;
    printf("Enter String\n") ;
    fgets(str,1000,stdin);

    n=strlen(str);
    if(n>0 &&(str[n-1]=='\n'))
    {
        str[n-1]='\0';
        n--;
    }   

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=n;j++){
            char sub[1000];
            strncpy(sub,str + i,j-i);
            sub[j - i] = '\0'; 
            printf("%s,",sub);
        }
    }

    return 0;
}