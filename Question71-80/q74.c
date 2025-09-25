/*Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

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
    int a1[n][m];
    int a2[m][n];
    printf("Enter elements");

    for(int i =0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a1[i][j]);
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }

    printf("After transpose\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            a2[i][j]=a1[j][i];
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}