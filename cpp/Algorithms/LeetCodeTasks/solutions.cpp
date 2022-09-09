#include "solutions.h"
#include "helper.h"
#include <unordered_map>

#pragma region Solution 2
ListNode * Solution2::addTwoNumbers(ListNode * l1, ListNode * l2)
{
    ListNode * result = new ListNode();
    int number = 0;

    if(l1 != nullptr)
    {
        number += l1->val;
    }

    if(l2 != nullptr)
    {
        number += l2->val;
    }

    result->val += number % 10;

    if(l1 != nullptr && l1->next != nullptr && l2 != nullptr && l2->next != nullptr)
    {
        l1->next->val += number / 10;
        result->next = addTwoNumbers(l1->next, l2->next);
    }
    else if(l1 != nullptr && l1->next != nullptr)
    {
        l1->next->val += number / 10;
        result->next = addTwoNumbers(l1->next, nullptr);
    }
    else if(l2 != nullptr && l2->next != nullptr)
    {
        l2->next->val += number / 10;
        result->next = addTwoNumbers(nullptr, l2->next);
    }
    else if(number / 10 > 0)
    {
        result->next = new ListNode(number / 10);
    }

    return result;
}

void Solution2::addTwoNumbers_Tests()
{
    ListNode * result;

    ListNode * ln1_1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode * ln1_2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    ln1_1->toString("input 1:\n  l1: [", ", ", "]");
    ln1_2->toString("  l2: [", ", ", "]");

    result = addTwoNumbers(ln1_1, ln1_2);
    result->toString("output 1:\n  [", ", ", "]\n");


    ListNode * ln2_1 = new ListNode(0);
    ListNode * ln2_2 = new ListNode(0);

    ln2_1->toString("input 2:\n  l1: [", ", ", "]");
    ln2_2->toString("  l2: [", ", ", "]");

    result = addTwoNumbers(ln2_1, ln2_2);
    result->toString("output 2:\n  [", ", ", "]\n");


    ListNode * ln3_1 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9)))))));
    ListNode * ln3_2 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));

    ln3_1->toString("input 3:\n  l1: [", ", ", "]");
    ln3_2->toString("  l2: [", ", ", "]");

    result = addTwoNumbers(ln3_1, ln3_2);
    result->toString("output 3:\n  [", ", ", "]\n");
}
#pragma endregion


#pragma region Solution 1
vector<int> Solution1::Solution1_TwoSum(vector<int> & nums, int target)
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

