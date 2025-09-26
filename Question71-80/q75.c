/*Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

void inputarray(int nn,int mm, int arr[nn][mm])
{
    for(int i =0;i<nn;i++)
    {
        for (int j = 0; j < mm; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    } 
}

void inputsize(int nn,int mm)
{   
    scanf("%d %d",&nn,&mm);
}

int main(){
    int n,m;
    printf("Ente size of array\n");
    inputsize(n,m);
    
    int arr1[n][m],arr2[n][m],sum[n][m];

    printf("Enter elements for 1st array\n");
    inputarray(n,m,arr1);
    printf("\nEnter elements for 2nd array\n");
    inputarray(n,m,arr2);

    printf("\nSum of array:\n");

    for(int i =0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        { 
            sum[i][j]=0;
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}