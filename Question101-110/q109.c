/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.


Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>
#include <limits.h>
void maxsum(int arr[],int n,int k){
    int maxsum= INT_MIN;
    for(int i=0;i<=n-k;i++){
        int currentsum=0;
        for(int j=0;j<k;j++)
        {
            currentsum+=arr[j+i];
        }
        if(currentsum>maxsum)
        maxsum=currentsum;
    }

    printf("Max sum of subarray of size %d is %d ",k,maxsum);
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

    maxsum(arr,n,k);
    return 0;
}