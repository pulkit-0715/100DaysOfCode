/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int substr(char temp[],char str2[]){
    int n1=strlen(temp);
    int n2= strlen(str2);
    for(int i =0;i<=n1-n2;i++)
    {
        int j;
        for(j=0;j<n2;j++)
        {
            if(temp[i+j]!=str2[j])        
            break;
        }

        if(j==n2)
        {
            return 1;
        }

    }

    return 0;

}
int isrotated(char str1[],int nn,char str2[],int mm){

    if(nn!=mm)
    return 0;

    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    return substr(temp,str2);
}

int main(){
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    int n=strlen(str1);
    if(n>0 && (str1[n-1]=='\n'))
    {
        str1[n-1]='\0';
        n--;
    }

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    int m=strlen(str2);
    if(m>0 && (str2[m-1]=='\n'))
    {
        str2[m-1]='\0';m--;
    }

    if (isrotated(str1,n, str2,m))
        printf("Rotated");
    else
        printf("Not rotated");

    return 0;
    
    return 0;
}