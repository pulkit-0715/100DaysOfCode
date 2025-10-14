/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

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
        if(arr[mid]==target)
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

int lastpos(int arr[],int n,int target){
    int i=0,j=n-1,ans=-1,mid;
    while (i<=j)
    {
        mid = i+((j-i)/2);
        if(arr[mid]==target)
        {
            ans=mid;
            i=mid+1;
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
    printf("First position: %d\n",firstpos(arr,n,target));
    printf("Last position: %d",lastpos(arr,n,target));

    return 0;
}