/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);

    double sum=0.0;

    for(int i=1;i<=n;i++)
    {
        sum+=(2.0*i)/((4.0*n)-1);
    }

    printf("Approximate sum: %g\n",sum);
    return 0;
}