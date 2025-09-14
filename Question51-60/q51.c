/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j<=(n-i))
            printf(" ");
            else
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}