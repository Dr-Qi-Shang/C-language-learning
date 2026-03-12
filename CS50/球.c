#include<stdio.h>
#define PI 3.14159
int main(void)
{
    double r,V,s;
    scanf("%lf", &r);
    V=PI*r*r*r*4/3;
    s=4*PI*r*r;
    printf("V=%.2f\n",V);
    printf("s=%.2f\n",s);
    return 0;
}
