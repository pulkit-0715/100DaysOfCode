/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

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
    fgets(str, sizeof(str),stdin);
    int i=0,j,n=strlen(str);

    if(n>0 && str[n-1]=='\n')
    --n;
    j=--n;
    while (i<=j)
    {
        if(str[i++]!=str[j--])
        {
            printf("Not palindrome");
            return 0;
        }   
    }
    
    printf("palindrome");

    return 0;
}