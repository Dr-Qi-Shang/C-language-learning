#include<stdio.h>
void swap(int *a,int *b);
int main(void)
{
    int x=1;
    int y=2;
    printf("x is %i,y is %i\n",x,y);
    swap(&x,&y);/* &表示地址是什么，获取地址，传递x和y的地址 */
    printf("x is %i,y is %i\n",x,y);
}

void swap(int *a,int *b)
{ 
    int tmp=*a;/* *表示前往某个地址,*a就是前往a储存的地址 */
    *a=*b;
    *b=tmp;
}