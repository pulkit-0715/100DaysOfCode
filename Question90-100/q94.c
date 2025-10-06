/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[1000],word[50],longest[50];
    int n;
    printf("Enter String\n");

    fgets(str,sizeof(str),stdin);
    n=strlen(str);
    if ((n>0)&&(str[n-1]=='\n'))
    {
        str[n-1]='\0';
        n--;
    }

    int i=0,j=0,maxlen=0;

    while(str[i]!='\0'){

        j=0;
        while (str[i]!=' '&& str[i]!='\0' && isalpha(str[i]))
        {
            word[j++]=str[i++];
        }
        word[j]='\0';

        int len=strlen(word);
        if(len>maxlen)
        {
            maxlen=len;
            strcpy(longest,word); 
        }

        while (str[i] != '\0' && !isalpha(str[i]))
            i++;

    }

    if (maxlen > 0)
        printf("Longest word: %s\n", longest);
    else
        printf("No valid word found.\n");

    return 0;
}
