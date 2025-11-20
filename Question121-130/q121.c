/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>
#include<string.h>

int main(){
    FILE *fp;
    char name[50];
    printf("Enter name");
    fgets(name,sizeof(name),stdin);

    name[strcspn(name, "\n")] = '\0';
    int age;
    printf("Enter age");
    scanf("%d",&age);
    fp=fopen("info.txt","w");
    if(fp==NULL)
    {
         printf("Error creating file.\n");
        return 1;
    }
    fprintf(fp,"Name %s Age %d\n",name,age);
    printf("File created successfully! Data written to info.txt\n");

    fclose(fp);
    return 0;
}