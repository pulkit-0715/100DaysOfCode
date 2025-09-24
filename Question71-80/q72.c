/*Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    int n,m,sum=0;
    printf("Ente size of array\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];

    printf("Enter elements");

    for(int i =0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }

    printf("Sum: %d",sum);
    return 0;
}
