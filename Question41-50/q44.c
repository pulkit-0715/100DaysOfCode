/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12


*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double sum = 0.0;
    double current_term = 1.32; 


    for (int i = 0; i < n; i++) {
        sum += current_term;
        current_term -= 0.22; 
    }

    printf("Approximate sum: %g\n", sum);

    return 0;
}
