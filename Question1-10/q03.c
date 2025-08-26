/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
/*
Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/

#include <stdio.h>

int main(){
    int l,b;
    printf("Enter length and breath of retriangle \n");
    scanf("%d %d",&l,&b);
    int p=2*(l+b);
    int area=l*b;
    printf("Area = %d \n", area);
    printf("Premeter = %d \n", p);

    return 0;
}
