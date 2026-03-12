#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    if(a<10)
    {
        printf("%d < 10",a);
    }
    else if(a>10)
    {
        printf("%d > 10",a);
    }
    else
    {
        printf("%d = 10",a);
    }
    return 0;
}