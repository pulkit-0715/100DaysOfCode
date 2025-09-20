/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

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
    printf("Enter elements of array 1st\n");
    int arr1[n];
    int i =0;
    while (i<n)
    {
        scanf("%d",&arr1[i]);
        i++;
    }

    printf("Enter size of 2st array\n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter elements of array 2nd\n");
     i =0;
    while (i<m)
    {
        scanf("%d",&arr2[i]);
        i++;
    }
    
    int mer[n+m];
    printf("Merged arr:\n");

    i=0;
    while (i<m+n)
    {
        if(i<n)
        mer[i]=arr1[i];
        else
        mer[i]=arr2[i-n];

        printf("%d ",mer[i++]);
    }

    

    return 0;
}