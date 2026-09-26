#include <stdio.h>

int singleNumber(int *nums, int n)
{
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        result = result ^ *(nums + i);
    }

    return result;
}

int main()
{
    int nums[] = {2, 2, 1};

    int result = singleNumber(nums, 3);

    printf("Single number = %d", result);

    return 0;
}