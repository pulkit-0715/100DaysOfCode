/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    if(n%2==0)
    sum = (n/2)*(n+1);
    else
    sum=(n)*((n+1)/2);

    int sumarray=0;
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

        sumarray+=arr[i];
    }

    printf("Element missing: %d",sum-sumarray);
    return 0;
}