/*Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    int n,odd=0,even=0;
    printf("Enter size of array");
    scanf("%d",&n);
    
    if(n==0)
    {
    printf("size cants be zero");
    return 1;
    }

    int arr[n];
    printf("Enter elements of array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("Even=%d, Odd=%d",even,odd);
    
    return 0;
}