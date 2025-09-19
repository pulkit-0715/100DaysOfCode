/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
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
    printf("Enter elements\n");

    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter element to find\n");
    int m;
    scanf("%d",&m);

    int i=0;
    while (i<n)
    {
        if(arr[i]==m){
            printf("Element found at index: %d",i);
            return 0;
        }
        i++;
    }
    
    printf("Element not found\n-1");
    
    return 0;
}