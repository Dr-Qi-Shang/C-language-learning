#include<stdio.h>
#include<string.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        int count=0;
        char str[1000];
        fgets(str,sizeof(str),stdin);
        size_t len=strcspn(str,"\n");
        str[len]='\0';
        for(size_t j=0;j<len;j++)
        {
            if(str[j]>='0' &&str[j]<='9')
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}