/*Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.


Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
int findmax(int arr[],int k){
    int max = arr[0];

    for(int i = 1; i < k; i++){
        if(arr[i] > max)
        max = arr[i];
    }

    return max;
}
void maxineachsubarray(int arr[],int n,int k){
    int arr2[k];
    int i,j;
    for(i=0;i<=n-k;i++)
    {   int ct=0;
        for(int j=i;j<k+i;j++)
        {   
            arr2[ct++]=arr[j];
        }

        int max= findmax(arr2,k);
        printf("%d ",max);
    }
}

int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elemnts of array\n");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter size of subarray\n");
    scanf("%d",&k);

    maxineachsubarray(arr,n,k);
    return 0;
}