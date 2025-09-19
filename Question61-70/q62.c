/*Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

void print_array(int a[],int nn)
{
    for(int i=0;i<nn;i++)
    printf("%d ",a[i]);
}

int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");

    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);

        int i=0 ,j=n-1;

    while (i<j)
    {
        int temp=arr[i];
        arr[i++]=arr[j];
        arr[j--]=temp;
    }
    print_array(arr,n);

    return 0;
}

