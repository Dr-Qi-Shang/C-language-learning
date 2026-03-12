#include<stdio.h>
int main(void)

{
    char a;
    scanf("%c",&a);
    if (a=='y'||a=='Y')
    {
        printf("Agreed.\n");
    }
    else if (a=='n'||a=='N')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("again");
    }

}
