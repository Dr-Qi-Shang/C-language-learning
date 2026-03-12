#include<stdio.h>
#include<string.h>
int main(void)
{
    printf("Before: ");
    char s[1000];
    fgets(s,sizeof(s),stdin);
    size_t len=strcspn(s,"\n");
    s[len]='\0';
    printf("After: ");
    for(int i=0,n=strlen(s);i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            printf("%c",s[i]-32);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    return 0;
}