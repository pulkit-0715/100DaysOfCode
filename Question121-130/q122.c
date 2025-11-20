//Write a C program that opens an existing file 
//(e.g., info.txt) and reads its contents using fgets(). 
//The program should print all the lines to the console 
//until EOF (end of file) is reached.
#include <stdio.h>

int main(){
    FILE *fp;
    char temp[200];
    fp=fopen("info.txt","r");
    if(fp==NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while (fgets(temp,sizeof(temp),fp)!=NULL)
    {
       printf("%s",temp);

    }
    fclose(fp);
    
    
    return 0;
}