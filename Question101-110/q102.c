/*
Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.


Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int firstpos(int arr[],int n,int target){
    int i=0,j=n-1,ans=-1,mid;
    while (i<=j)
    {
        mid = i+((j-i)/2);
        if(arr[mid]>=target)
        {
            ans=mid;
            j=mid-1;
        }
        else if(arr[mid]<target)
        {
            i=mid+1;
        }
        else
        j=mid-1;
    }

    return ans;
    
}


int main(){
    printf("Enter size of array\n");
    int n;
    scanf("%d",&n);

    int arr[n];
    printf("Enter elemnts of array\n");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter target\n");
    int target;
    scanf("%d",&target);
    printf("Closest Number is at index %d which is %d\n",firstpos(arr,n,target),arr[firstpos(arr,n,target)]);

    return 0;
}