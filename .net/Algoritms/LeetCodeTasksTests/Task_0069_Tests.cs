using LeetCodeTasksLibrary;

using Xunit;

namespace LeetCodeTasksTests
{
    public class Task_0069_Tests
    {
        [Theory]
        [InlineData(4, 2)]
        [InlineData(8, 2)]
        [InlineData(1, 1)]
        [InlineData(9, 3)]
        [InlineData(2147395599, 46339)]
        public void Task_0069_MySqrt_Tests(int input, int expected)
        {
            var actual = Task_0069.MySqrt(input);

            Assert.Equal(expected, actual);
        }
    }
}
