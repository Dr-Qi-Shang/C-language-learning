#include<stdio.h>
void cough(int n);
int main(void)
{
    for (int i = 0;i<3;i++)
    {
        cough(7);/*这段代码里的7是cough（int n）里的n，3*7=21，会输出21个cough*/
    }
}
void cough(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("cough\n");
        printf("%d\n",i);
    }
}