#include <stdio.h>

int main(){
    int n ,divi=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0)
        divi+=i;
    }
    
    if(divi==n)
        printf("Perfect number");
    
    else
        printf("not perfect number");

    return 0;
}