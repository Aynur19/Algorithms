#include "pch.h"
#include "LeetCodeTasks.h"


vector<int> task1_TwoSum(vector<int> & nums, int target)
{
    int nSize = nums.size();
    unordered_map<int, int> numbers;

    int temp;
    for(int i = 0; i < nSize; i++)
    {
        temp = nums[i];

        if(numbers[target - temp] > 0)
        {
            return { i, numbers[target - temp] - 1 };
        }

        if(numbers[temp] <= 0)
        {
            numbers[temp] = i + 1;
        }
    }

    return { 0,0 };
}