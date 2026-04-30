void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void reverseString(char* s, int sSize) 
{
    int x=0;
    int y=sSize-1;
    while(x<y)
    {
        swap(&s[x],&s[y]);
        x++;
        y--;
    }
}