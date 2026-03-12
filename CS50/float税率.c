#include<stdio.h>
#include<math.h>
int main(void)
{
    float i;
    printf("What's the price?\n");
    scanf("%f",&i);
    printf("Your total is %.2f",i*1.0625);
    return 0;
}