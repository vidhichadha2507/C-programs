void merge(int *nums, int s, int e, int *temp)

{

    int mid = (s+e)/2;

    

    int i = s;

    int j = mid+1;

    int k = s;

    

    while(i<=mid && j<=e)

    {

        if(nums[i] < nums[j])

            temp[k++] = nums[i++];

        else

            temp[k++] = nums[j++];

    }

    while(i <= mid)

        temp[k++] = nums[i++];

    while(j <= e)

        temp[k++] = nums[j++];

    

    //Copy temp to original array

    for(int i=s; i<=e; i++)

    {

        nums[i] = temp[i];

    }

}

void mergeSort(int *nums, int s, int e, int *temp)

{

    if(s>=e)

        return;

    

    //Follow 3 steps

    //1. Divide

    int mid = (s+e)/2;

    

    //2. Recursively the arrays s,mid and mid+1,e

    mergeSort(nums, s, mid, temp);

    mergeSort(nums, mid+1, e, temp);

    

    //3. Merge the 2 parts

    merge(nums, s, e, temp);   

}

int* sortArray(int* nums, int numsSize, int* returnSize){

    int s=0;

    int e=numsSize-1;

    

    int *temp = (int*)malloc(sizeof(int) * (e+1) );

    

    mergeSort(nums,s,e,temp);

    

    *returnSize = numsSize;

    return nums;

}
