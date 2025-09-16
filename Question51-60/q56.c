/*Q56: Read and print elements of a one-dimensional array.

Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);

    printf("Entered elements are\n");
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
        
    return 0;
}