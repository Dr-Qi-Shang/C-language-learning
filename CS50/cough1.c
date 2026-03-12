#include<stdio.h>
void cough(void);
int main(void)
{
    int n;
    scanf("%d",&n);
    for (int i = 0;i<n;i++)
    {
        cough();
    }
}
void cough(void)
{
    printf("cough\n");
}