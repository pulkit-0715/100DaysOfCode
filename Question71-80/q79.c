/*Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>
#include <stdbool.h>

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
    int arr[n][m];
    printf("Enter elemnts\n");
    inputarray(n,m,arr);

    bool up=true;
    int i=0,j=0,k=0;
    int output[n*m];
    while (i<n && j<m)
    {
    
    if(up){

        while (i>0 && j<m-1)
        {
            output[k++]=arr[i][j];
            i--;
            j++;
        }
        output[k++]=arr[i][j];
        if(j==n-1)
        i++;
        else
        j++;
    }
    else{
        while(j>0&&i<n-1){
            output[k++]=arr[i++][j--];
        }
         output[k++]=arr[i][j];
        if(i==n-1)
        j++;
        else
        i++;

    }
    up=!up;
}

    for(k=0;k<(n*m);k++)
    printf("%d ",output[k]);
    return 0;
}