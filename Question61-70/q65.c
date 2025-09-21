/*
Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    int n ;
      printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");

    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter element to find\n");
    int target;
    scanf("%d",&target);


    int i=0,j=n-1;
    while(i<=j)
    {
        int mid = i+(j-i)/2;
        if(arr[mid]<target)
        i=mid+1;
        if(arr[mid]>target)
        j=mid-1;
        else if(arr[mid]==target)
        {
            printf("found at index: %d\n",mid);
            return 0;
        }
    }

    printf("Element not found");
    return 0;
}