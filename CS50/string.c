#include<stdio.h>
#include<string.h>
int main(void)
{
    printf("Input: ");
    char s[1000];
    fgets(s,sizeof(s),stdin);
    size_t len=strcspn(s,"\n");
    s[len]='\0';
    printf("Output: ");
    for(size_t i=0;i<len;i++)/*或者s[i]!=\0;i<strcspn(s,"\n");strlen(s)*/
    {
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}