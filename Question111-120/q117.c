/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int n,m;
    printf("Enter size of 1st array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter size of 2nd array\n");
    scanf("%d",&m);
    int brr[m];
    printf("Enter elements\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&brr[i]);
    }


    int crr[m+n];
    int k=0,i=0,j=0;
    
    while(i<n && j<m)
    {
        if(arr[i]<brr[j])
        crr[k]=arr[i++];
        else
        crr[k]=brr[j++];
        k++;
    }

    while(i<n)
    crr[k++]=arr[i++];
    while(j<m)
    crr[k++]=brr[j++];

    for(int i=0;i<n+m;i++)
    printf("%d ",crr[i]);

    return 0;
}