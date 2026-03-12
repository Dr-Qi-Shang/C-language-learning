#include<stdio.h>
int main(void)
{
    int number[6]={4,8,15,16,23,41};
    for(int i=0;i<6;i++)
    {
        if(number[i]==50)
        {
            printf("Found\n");
        }
    }
    printf("Not Found\n");
    return 0;
}