#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    printf("n:\n");
    scanf("%d",&n);
    if(n%2==1)
    {
        printf("odd");
    }
    else if (n%2==0)
    {
        printf("even");
    }
    return 0;
}