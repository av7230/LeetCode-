int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    int *a=malloc(sizeof(int)*2);
for(i=0;i<numsSize;i++){
    for(j=i+1;j<numsSize;j++){
        if (nums[i]+nums[j]==target)
        {
            
           a[0]=i;
            a[1]=j;
            *returnSize=2;
            return a;
        }
    }
}return;
}
