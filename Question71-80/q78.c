/*Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

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

void inputsize(int *nn,int *mm)
{   
    scanf("%d %d",nn,mm);
}

int main(){

    int n,m;
    printf("Ente size of array\n");
    inputsize(&n, &m);
    if(n!=m)
    {
        printf("Array should be square matrix");
        return 1;
    }
    printf("Enter elements of array");
    int arr[n][m];
    inputarray(n,m,arr);

    int sum=0;

    for(int i=0;i<n;i++)
    sum+=arr[i][i];

    printf("Sum: %d",sum);

    return 0;
}