/*
Q6: Write a program to swap two numbers using a third variable.

Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

/*
Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    int n1,n2;
    printf("Enter 2 number");
    scanf("%d %d",&n1,&n2);
    printf("n1= %d\n",n1);
    printf("n2= %d\n",n2);
    int n3=n1;
    n1=n2;
    n2=n3;
    printf("After Swap: %d %d",n1,n2);


    return 0;
}
