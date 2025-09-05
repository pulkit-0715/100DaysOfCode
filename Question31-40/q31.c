/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main() {
    int n;
    unsigned int k;
    char binstr[100]="";
    int index=0;


    printf("Enter an integer (positive or negative): \n");
    scanf("%d", &n);

   if(n>=0)
   {
    if(n==0)
    {
        binstr[index++]='0';
    }
    else
    while (n!=0)
    { 
       binstr[index++]='0'+(n%2);
       n/=2;
    }
    binstr[index]='\0';
     int i=0,j=index-1;
     
     //two pointer approach to reverse the string
     while (i<j)
     {
        char temp=binstr[i];
        binstr[i]=binstr[j];
        binstr[j]= temp;
        i++;
        j--;
     }
     

     printf("Binary: %s\n", binstr);
    return 0;    
   }

    else
   {
    unsigned int un= (unsigned int)n;
    for(int i =31;i>=0;i--)
    {
        k=un>>i;
        if(k&1)
        {
            binstr[index++]='1';
        }
        else{
            binstr[index++]='0';
        }

        if(i%8==0)
        {
            binstr[index++]=' ';
        }
    }
    printf("Binary: %s\n", binstr);
   }

    return 0;
}
