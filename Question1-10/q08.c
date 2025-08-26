/*Q8: Write a program to find and display the sum of the first n natural numbers.


Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter to find the sum till nth tearm");
    scanf("%d",&n);
    int sum = n*(1+n)/2;
    /*could have used for loop but 
    just to save run time and have 
    better time complexity*/
    printf("sum is %d" ,sum);
    return 0;
}
