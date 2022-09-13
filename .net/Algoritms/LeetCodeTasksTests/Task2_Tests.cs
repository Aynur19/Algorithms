using DataStructures;

using LeetCodeTasksLibrary;

using Xunit;

namespace LeetCodeTasksTests
{
    public class Task2_Tests
    {
        [Fact]
        public void Task2_AddTwoNumbers_Tests()
        {
            ListNode ln1 = new();
            ListNode ln2 = new();
            ListNode expected = new();

            var actual = Task2.AddTwoNumbers(ln1, ln2);

            Assert.Equal(expected, actual);
        }
    }
}
