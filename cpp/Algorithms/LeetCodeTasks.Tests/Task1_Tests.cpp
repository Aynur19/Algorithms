#include "pch.h"
#include "CppUnitTest.h"
#include "../LeetCodeTasksLibrary/LeetCodeTasks.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTasksTests
{
	TEST_CLASS(Task1_Tests)
	{
	public:
		
		TEST_METHOD(task1_Test1)
		{
            vector<int> data{ 2, 7, 11, 15 };
            vector<int> expected{ 0, 1 };
            int target = 9;

            vector<int> actual = task1_TwoSum(data, target);

            Assert::IsTrue((expected[0] == actual[0] && expected[1] == actual[1]) 
                           || (expected[0] == actual[1] && expected[1] == actual[0]));
		}

        TEST_METHOD(task1_Test2)
        {
            vector<int> data { 3, 2, 4 };
            vector<int> expected { 1, 2 };
            int target = 6;

            vector<int> actual = task1_TwoSum(data, target);

            Assert::IsTrue((expected[0] == actual[0] && expected[1] == actual[1])
                           || (expected[0] == actual[1] && expected[1] == actual[0]));
        }

        TEST_METHOD(task1_Test3)
        {
            vector<int> data { 3, 3 };
            vector<int> expected { 0, 1 };
            int target = 6;

            vector<int> actual = task1_TwoSum(data, target);

            Assert::IsTrue((expected[0] == actual[0] && expected[1] == actual[1])
                           || (expected[0] == actual[1] && expected[1] == actual[0]));
        }
	};
}
