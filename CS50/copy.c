#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
    char s[100],t[100];
    printf("s:");
    scanf("%s",s);
    strcpy(t,s);
    t[0]=toupper(t[0]);
    printf("%s\n",s);
    printf("%s\n",t);
}