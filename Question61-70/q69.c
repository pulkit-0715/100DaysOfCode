/*Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>
/*
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        int swapped=0;
        for (int j = 0; j <n-i-1; j++)
        {
            int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
        }
        if(swapped=0)
        break;
    }

}
*/

void insertitionsort(int arr[], int n){

    for(int i=1;i<n;i++)
    {
        int key =arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;
    }
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

    insertitionsort(arr, n);

    printf("second largest element: ");
    
        printf("%d ", arr[n-2]);
    return 0;
}