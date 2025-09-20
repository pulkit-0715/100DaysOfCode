/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    long long n;
    printf("Enter the number\n");
    scanf("%lld",&n);
    long long int temp =n;
    int arr[10]={0};

    while (temp!=0)
    {
        arr[(temp%10)]++;
        temp/=10;
    }   

    int max=arr[0];
    int digit=0;
    for (int i = 1; i <10; i++)
    {
        if(arr[i]>max)
        {
        max=arr[i];
        digit =i;
        }
    }
     printf("Max digit=%d",digit);
    return 0;
}