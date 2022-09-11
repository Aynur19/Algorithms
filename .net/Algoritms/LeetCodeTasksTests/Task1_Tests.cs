using LeetCodeTasksLibrary;

using Xunit;

namespace LeetCodeTasksTests
{
    public class Task1_Tests
    {
        [Theory]
        [InlineData(new int[] { 2, 7, 11, 15 }, 9, new int[] { 0, 1 })]
        [InlineData(new int[] { 3, 2, 4 }, 6, new int[] { 1, 2 })]
        [InlineData(new int[] { 3, 3 }, 6, new int[] { 0, 1 })]
        public void TwoSum_Tests(int[] nums, int target, int[] expected)
        {
            var actual = Task1.TwoSum(nums, target);

            Assert.True((expected[0] == actual[1] && expected[1] == actual[0]) 
                || (expected[0] == actual[0] && expected[1] == actual[1]));
        }
    }
}