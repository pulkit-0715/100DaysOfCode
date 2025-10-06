/*Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void sort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    char str[1000];
    char str2[1000];
    int n1=0,n2=0;
    printf("Enter 1st String\n");
    fgets(str,sizeof(str),stdin);
    n1=strlen(str);
    if((n1>0)&& (str[n1-1]=='\0'))
    {
    str[n1-1]='\0';
    n1--;
    }

    printf("Enter 2nd String\n");
    fgets(str2,sizeof(str2),stdin);
    n2=strlen(str2);
    if((n2>0)&& (str2[n2-1]=='\0'))
    {
    str[n2-1]='\0';
    n2--;
    }

    if(n1!=n2)
    {
        printf("Not anagrams");
        return 0;
    }
    
    sort(str,n1);
    sort(str2,n2);

    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]!=str2[i])
        {
        printf("Not anagrams");
        return 0;
        }
        i++;
    }

        printf("Anagrams");
    
    return 0;
}