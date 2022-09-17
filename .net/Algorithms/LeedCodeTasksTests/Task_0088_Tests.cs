using LeetCodeTasksLibrary;

using Xunit;

namespace LeedCodeTasksTests
{
    public class Task_0088_Tests
    {
        [Theory]
        [InlineData(new int[] { 1, 2, 3, 0, 0, 0 }, 3, new int[] { 2, 5, 6 }, 3, new int[] { 1, 2, 2, 3, 5, 6 })]
        [InlineData(new int[] { 1 }, 1, new int[] { }, 0, new int[] { 1 })]
        [InlineData(new int[] { 0 }, 0, new int[] { 1 }, 1, new int[] { 1 })]
        [InlineData(new int[] { 2, 0 }, 1, new int[] { 1 }, 1, new int[] { 1, 2 })]
        [InlineData(new int[] { -1, 0, 0, 3, 3, 3, 0, 0, 0 }, 6, new int[] { 1, 2, 3 }, 3, new int[] { -1, 0, 0, 1, 2, 3, 3, 3, 3 })]
        public void MergeTests(int[] nums1, int m, int[] nums2, int n, int[] expected)
        {
            Task_0088.Merge(nums1, m, nums2, n);
            
            for(int i = 0; i < nums1.Length; i++)
            {
                Assert.Equal(expected[i], nums1[i]);
            }
        }
    }
}