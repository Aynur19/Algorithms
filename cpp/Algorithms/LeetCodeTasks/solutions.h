#pragma once
#include <iostream>
#include <vector>
#include "helper.h"
#include "linkedList.h"

using namespace std;


class Solution2
{
public:
    ListNode * addTwoNumbers(ListNode * l1, ListNode * l2);

    void addTwoNumbers_Tests();
};



class Solution1
{
public:
    vector<int> Solution1_TwoSum(vector<int> & nums, int target);

    void Solution1_TwoSum_Tests();
};
