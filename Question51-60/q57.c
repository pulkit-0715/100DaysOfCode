/*
Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the array\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    /*
       while(i<n)
    {
        scanf("%d",&arr[i]);
    }
 
    while(i<n)
    {
        sum+=arr[i];
    }
    */
    printf("\nSum is: %d",sum);

    return 0;
}