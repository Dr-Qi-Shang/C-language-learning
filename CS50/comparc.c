#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main( void )
{
    char *s,*t;
    s=malloc(100);
    t=malloc(100);
    printf("s:");
    scanf("%s", s);
    printf("t:");
    scanf("%s", t);
    printf("%s\n", s);
    printf("%s\n", t);
}