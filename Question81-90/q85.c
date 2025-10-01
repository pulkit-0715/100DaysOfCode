
/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include <string.h>
int main(){
char str[1000], revstr[100];
printf("Enter String\n");
fgets(str, sizeof(str), stdin);
int i=0,n=0;
while (str[n]!='\0')
{
    n++;
}

if(n>0&&str[n-1]=='\n')
--n;



while (n>=0)
{
    revstr[i++]=str[n--];
}
revstr[i]='\0';

printf("Reverse String%s",revstr);


return 0;
}