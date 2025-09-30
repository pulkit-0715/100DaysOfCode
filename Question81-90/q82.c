/*Q82: Print each character of a string on a new line.


Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    char str[1000];
    int count = 0;
    printf("Enter String\n");
    fgets(str, sizeof(str), stdin);

    while (str[count]!='\0')
    {
        printf("%c\n",str[count++]);
    }
    return 0;
}