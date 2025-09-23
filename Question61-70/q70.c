/*Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

void reverse(int arr[],int start,int end){
    while (start<end)
    {
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end] = temp;
        start++;end--;
    }
}

void rotateright(int arr[],int n,int k){
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}

void print_array(int a[],int nn)
{
    for(int i=0;i<nn;i++)
    printf("%d ",a[i]);
}
int main(){

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to rotate at");
    int k;
    scanf("%d",&k);

    rotateright(arr,n,k);

    print_array(arr,n);
    return 0;
}

