#include<stdio.h>
int main(void)
{
    int n,j;
    scanf(" %d",&n);
AMD:for(int i=0;i<=n;i++)
    {
        printf("#");
    }
    printf("\n");
    j++;
    if (j<n)
    {
        goto AMD;
    }
    return 0;
}