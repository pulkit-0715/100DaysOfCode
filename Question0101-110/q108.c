/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.


Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

Question0101-110/q105.c
*/
#include <stdio.h>
void product(int arr[],int n){
    int lp[n],rp[n],ans[n];

    lp[0]=1;rp[n-1]=1;

    for(int i=1;i<n;i++)
    {
        lp[i]=lp[i-1]*arr[i-1];
    }
    
    for(int i=n-2;i>=0;i--)
    {
        rp[i] =rp[i + 1] * arr[i + 1];
    }
    
    for (int i = 0; i < n; i++)
    ans[i] = lp[i] * rp[i];

    for (int i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if (i != n - 1)
        printf(", ");
    }

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

    product(arr,n);
    return 0;
}