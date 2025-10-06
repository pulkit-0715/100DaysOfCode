/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void revwd(int i,int j, char arr[]){
     
    while(i<j){
        char temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;j--;
    }
}
int main(){
    char str[1000];
    printf("Enter String\n");
    fgets(str,1000,stdin);
    int n=strlen(str);
    if(n>0 && (str[n-1]=' '))
    {
        str[n-1]='\0';
        n--;
    }

    int i=0,j,k=0;
    while(str[i]!='\0'){
        while (str[i]!=' '&& str[i]!='\0')
        {
            j=i;
            i++;
        }   

        revwd(k,j,str);
          j++;
          while(str[j]==' ')
            k=j++;

            k++;
            i++;

    }

    printf("Reversed word of array\n%s",str);


    
    return 0;
}