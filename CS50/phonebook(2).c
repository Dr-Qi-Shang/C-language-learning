#include<stdio.h>
#include <string.h>

int main(void)
{
    //open file
    FILE *file=fopen("phonebook.csv","a");
   
    //Get string from user
    char name[100];
    char number[100];
    printf("Name: ");
    scanf("%s",name);
    printf("Number: ");
    scanf("%s",number);
 
    //print (write) string to file
    fprintf(file,"%s,%s\n",name,number);
  
    //Close file
    fclose(file);
}