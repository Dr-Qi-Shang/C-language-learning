#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    char *s=malloc(100);
    printf("s:");
    scanf("%99s",s);
    char *t=malloc(strlen(s)+1);
    strcpy(t,s);/*char *t=s；是浅拷贝，char *t=malloc(strlen(s)+1);strcpy(t,s);是深拷贝。*/

    /*如果我用for(i=0,n=strlen(s);i<=n;i++)来代替strcpy(t,s)，复制完后，t的最后会有字符串结束符 \0。*/
    /*for(i=0,n=strlen(s);i<=n;i++)如果改成i<n，不复制字符串结束符 \0,结果是 t 不是合法 C 字符串。
    后果：

    1.printf("%s", t) 会继续往后读内存，直到“碰巧”遇到某个 \0。
    2.可能出现乱码、输出多余字符、甚至崩溃。
    3.这是未定义行为。
    */
    /*PS:使用for(i=0,n=strlen(s);i<=n;i++)比使用for(i=0;i<=strlen(s);i++)效率更高
    因为 strlen 每调用一次，都要从头扫描字符串直到遇到 \0，时间复杂度是 O(n)。

    写法一：for(i=0; i<=strlen(s); i++)
    每次循环判断都要再算一遍 strlen(s)。
    如果字符串长度是 n，这个判断大约执行 n+1 次，总体会接近 O(n²)。

    写法二：for(i=0, n=strlen(s); i<=n; i++)
    strlen 只算一次，后面直接用 n 比较。
    循环本身是 O(n)，总体是 O(n)。*/ 
    t[0]=toupper(t[0]);
    printf("%s\n",s);
    printf("%s\n",t);
    free(s);
    free(t);
    return 0;
}