/*Q54: Write a program to print the following pattern:

    *
   ***
  *****
 *******
   ***
    *




Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main() {
    int n = 6;        
    int maxStars = 7; 

    for (int i = 1; i <= n; i++) {
        int stars;

        if (i <= 4)
            stars = 2*i - 1; 
        else 
            stars = 2*(n - i) + 1;   

        int spaces = (maxStars - stars) / 2;

        
        for (int j = 1; j <= spaces; j++) 
            printf(" ");
        
        for (int j = 1; j <= stars; j++) 
            printf("*");

        printf("\n");
    }

    return 0;
}
