/*Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>
#include <ctype.h>
int main(){
    char str[1000];
    int vowels=0,consonants=0;
    printf("Enter String\n");
    fgets(str, sizeof(str), stdin); 
    for(int i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if((ch>='a' && ch<='z')){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowels++;
            else
            consonants++;
        }
    }
    printf("Vowels=%d, Consonants=%d",vowels,consonants);
    
    return 0;
}