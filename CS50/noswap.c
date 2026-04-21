#include<stdio.h>
void swap(int a,int b);
int main(void)
{
    int x=1;
    int y=2;
    printf("x is %i,y is %i\n",x,y);
    swap(x,y);
    printf("x is %i,y is %i\n",x,y);
}

void swap(int a,int b)
/*swap(x, y) 把 x 和 y 的值（1 和 2）复制给了局部变量 a 和 b。

函数内部交换的是 a 和 b 这两个副本。

函数结束时，a 和 b 被销毁，main 中的 x 和 y 纹丝不动。*/
{ 
    int tmp=a;
    a=b;
    b=tmp;
}