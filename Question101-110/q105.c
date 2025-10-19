/*Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>
int findmaxi(int arr[],int n){
    int ct=0,nums;
    for (int i = 0; i < n; i++)
    {
        if(ct==0)
        nums=arr[i];

        if(nums==arr[i])
        ct++;
        else 
        ct--;
    }

    ct=0;

    for(int i=0;i<n;i++)
    if(arr[i]==nums)
    ct++;

    if(ct>n/2)
    return nums;
    else
    return -1;

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


    printf("Max array element%d",findmaxi(arr,n));

    return 0;
}