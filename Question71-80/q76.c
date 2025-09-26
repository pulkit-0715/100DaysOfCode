/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

void input(int nn,int mm, int arr[nn][mm])
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

    if(n!=m){
        printf("Flase");
                return 0;
    }
    
    int arr[n][m];
    printf("Enter elements for array\n");
    input(n,m,arr);


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                printf("Flase");
                return 0;
            }
        }
    }

    printf("True");
    
    return 0;
}