#include <stdio.h>
#include <stdlib.h>

// actual test
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 1 + i; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                *returnSize = 2;
                int* arr = (int*) malloc(2*sizeof(int));
                if (arr == NULL)
                {
                  return NULL;
                }
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }            
    }
    return NULL;
}
//

int main()
{
	int arr[4] = {2,7,11,15};
	int target = 9;
	int size = 0;
	int* sum = twoSum(arr, 4, target, &size);
	if (sum == NULL)
	{
		return -1;
	}
	for (int i = 0; i < size; i++)
	{
		printf("Index: %d\n", sum[i]);
	}
	free(sum);
	return 0;
}