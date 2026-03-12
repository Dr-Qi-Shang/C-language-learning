#include<stdio.h>
#include<string.h>
int main(void)
{
    char names[4][20]={"EMMA","RODRIGO","BRIAN","DAVID"};
    for(int i=0;i<4;i++)
    {
        if(strcmp(names[i],"EMMA")==0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}