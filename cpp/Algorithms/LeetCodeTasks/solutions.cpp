#include "solutions.h"
#include "helper.h"


#pragma region Solution 1
vector<int> Solution1::Solution1_TwoSum(vector<int> & nums, int target)
{
    int nSize = nums.size();
    for(int i = 0; i < nSize - 1; i++)
    {
        for(int j = i + 1; j < nSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                return { i,j };
            }
        }

    }

    return vector<int>(2);
}

void Solution1::Solution1_TwoSum_Tests()
{
    vector<int> test1 = { 2,7,11,15 };
    vector<int> test2 = { 3,2,4 };
    vector<int> test3 = { 3,3 };

    int target1 = 9;
    int target2 = 6;
    int target3 = 6;

    cout << "nums:\n  " << vectorToString(test1, "[", "]") << endl;
    cout << "target:\n  " << target1 << endl;
    cout << "indexes:\n  " << vectorToString(Solution1_TwoSum(test1, target1), "[", "]\n") << endl;

    cout << "nums:\n  " << vectorToString(test2, "[", "]") << endl;
    cout << "target:\n  " << target2 << endl;
    cout << "indexes:\n  " << vectorToString(Solution1_TwoSum(test2, target2), "[", "]\n") << endl;

    cout << "nums:\n  " << vectorToString(test3, "[", "]") << endl;
    cout << "target:\n  " << target3 << endl;
    cout << "indexes:\n  " << vectorToString(Solution1_TwoSum(test3, target3), "[", "]\n") << endl;
}
#pragma endregion

