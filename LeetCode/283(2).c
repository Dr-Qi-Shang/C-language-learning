void swap(int *a,int *b)
{ 
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void moveZeroes(int* nums, int numsSize) 
{
    int x=0;
    int y=0;
    while(y<numsSize)
    {
        if(nums[y]!=0)
        {
            swap(&nums[x],&nums[y]);
            x++;
        }
        y++;
    }
}
/* 双指针交换法 */