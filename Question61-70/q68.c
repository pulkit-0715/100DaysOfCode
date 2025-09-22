/*
Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>
void print_array(int a[],int nn)
{
    for(int i=0;i<nn;i++)
    printf("%d ",a[i]);
}

int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");

    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter postion to delete the element");
    int pos;
    scanf("%d",&pos);
    if(pos<0||pos>(n))
    {
        printf("Element can not be deleted there");
        return 1;
    }

    for(int i =pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }

    
    print_array(arr,--n);

    return 0;
}