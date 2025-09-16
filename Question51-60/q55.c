/*Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
#include <stdbool.h>

bool prime(int n){
    if (n <= 1) return false;       
    if (n == 2) return true;        
    if (n % 2 == 0) return false;   
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main(){
    int nn;
    printf("Enter number");
    scanf("%d",&nn);

    for (int i = 1; i <=nn; i++)
    {
        if(prime(i))
        printf("%d ",i);
    }
    

    return 0;
}
