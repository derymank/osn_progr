#include <iostream>
#include <cmath>
#include <algorithm>

bool findPair(int* nums, int numsSize, int indexDiff, int valueDiff)
{
    for (int i = 0; i < numsSize; ++i)
    {
        for (int j = i + 1; j < numsSize; ++j)
        {
            if (std::abs(i - j) > indexDiff || std::abs(nums[i] - nums[j]) > valueDiff) continue;
            return true;
        }
    }
    return false;
}

int main()
{
    int nums[] = { 1, 5, 9, 1, 5, 9 };
    int indexDiff = 2, valueDiff = 3;
    bool result = findPair(nums, 5, indexDiff, valueDiff);
    std::cout << result;
    return 0;
}