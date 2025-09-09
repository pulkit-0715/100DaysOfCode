/*Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

int main(){
    long long int n,ans=0;
    printf("Enter a number\n");
    scanf("%lld",&n);
    long long int temp=n;

    if (n==0)
    {
        printf("Ans: 0");
        return 0;
    }
    
    while (temp!=0)
    {
        if((temp%10)%2!=0)
        ans+=(temp%10);
        temp/=10;
    }


    printf("Ans: %lld",ans);

     return ans;
}