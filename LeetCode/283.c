void moveZeroes(int* nums, int numsSize) 
{
    int a=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            a++;
        }
    }
    for(int j=0;j<numsSize;j++)
    {
        for(int i=0;i<numsSize-1;i++)
        {
            if(nums[i]==0 && nums[i+1]!=0)
            {
                nums[i]=nums[i+1];
                nums[i+1]=0;
            }
        }
    }
    for(int i=numsSize-a;i<numsSize;i++)
    {
        nums[i]=0;
    }
    for(int i=0;i<numsSize;i++)
    {
        printf("%d",nums[i]);
    }
    return;
}