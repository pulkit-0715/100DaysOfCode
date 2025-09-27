/*Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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

void sort(int nn,int arr[nn])
{   
    for (int i = 1; i < nn; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
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

    int diag[n];
    for(int i=0;i<n;i++)
    diag[i]=arr[i][i];

    sort(n,diag);

    for(int i=0;i<n-1;i++)
    if(diag[i]==diag[i+1])
    {
        printf("digonal elemts are not unique");
        return 0;
    }

    printf("digonal elemts are unique");
    
    return 0;
}