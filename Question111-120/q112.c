/*Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <limits.h>
#include <stdio.h>
void maxsubsum(int arr[],int n){

    int max=INT_MIN,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

        if(sum>max)
            max=sum;

            if(sum<0)
            sum=0;

    }

    if(max==INT_MIN)
    max=0;

    printf("Max sum is %d\n",max);
}


int main() {
    int n;
    printf("Enter array siz\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    maxsubsum(arr, n);
    return 0;
}
