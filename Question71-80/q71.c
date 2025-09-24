/*Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4


Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int n,m;
    printf("Ente size of array\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];

    printf("Enter elements\n");

    for(int i =0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Elements are:\n");
    for(int i =0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
