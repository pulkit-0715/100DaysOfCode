/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>
float percent(int ccp, int ssp){
   if(ccp>ssp)
   return ((ccp-ssp)/(1.0*ccp))*100;
   else 
   return ((ssp-ccp)/(1.0*ccp))*100;

}

int main(){
    int cp,sp;
    printf("Enter cost and selling price\n");
    scanf("%d %d",&cp,&sp);
    if(cp>sp)
        printf("Loss %.1f",percent(cp , sp));
    else if(cp<sp)
        printf("Profit %.1f",percent(cp , sp));
    else
         printf("No profit No loss"); 
    return 0;
}