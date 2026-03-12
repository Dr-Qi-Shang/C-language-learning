#include <stdio.h>
int main() 
{
    int i;  
    scanf("%d", &i);  
    int mod = i % 7;
    if (mod == 0) 
    {
        mod = 7;  
    }
    printf("%c", "abcdefg"[mod - 1]);  
    return 0;
}