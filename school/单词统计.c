#include<stdio.h>
int main(void)
{
    char str[1000];
    gets(str);
    int i=0;
    int word_count=0;
    int in_word=0;/*0代表前一个字符不在单词内*/
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            if(in_word==0)
            {
                word_count++;
                in_word=1;
            }
            /*如果当前的字符和前一个字符都在单词内，一定存在（相邻的在单词内的字符）之前有一个字符不在单词内，
            就会有01，01完，in_word会变成1，011（01是之前的01）的第二个1，由于in_word已经=1，就不用再让
            in_word再=1一次*/
        }
        else
        {
            in_word=0;
        }  
        i++;
    }
    printf("%d",word_count);
    return 0;
}