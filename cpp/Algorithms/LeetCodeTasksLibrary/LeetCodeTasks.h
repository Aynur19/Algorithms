#pragma once

#ifdef LCT_EXPORTS
#define LCT_API __declspec(dllexport)
#else
#define LCT_API __declspec(dllimport)
#endif

#include "pch.h"
#include <vector>
#include <unordered_map>


using namespace std;

extern LCT_API vector<int> task1_TwoSum(vector<int> & nums, int target);