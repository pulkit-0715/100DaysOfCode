/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

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
    int arrsum[n];
    printf("Enter elements");

    for(int i =0;i<n;i++)
    {
        arrsum[i]=0;
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
            arrsum[i]+=arr[i][j];
        }
    }

        printf("\nSum of each row:\n");
        for (int i = 0; i < n; i++) 
        printf("Row %d: %d\n", i + 1, arrsum[i]); 
    
    return 0;
}