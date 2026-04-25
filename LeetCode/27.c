void swap(int* a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int removeElement(int* nums, int numsSize, int val) 
{
    int x=0;
    int y=0;
    while(y<numsSize)
    {
        if(nums[y]!=val)
        {
            swap(&nums[x],&nums[y]);
            x++;
        }
        y++;
    }
    return x;
}