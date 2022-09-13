namespace LeetCodeTasksLibrary
{
    public class Task1
    {
        public static int[] TwoSum(int[] nums, int target)
        {
            Dictionary<int, int> pairs = new();

            int temp;
            for (int i = 0; i < nums.Length; i++)
            {
                temp = nums[i];

                if(pairs.TryGetValue(target-temp, out int index) && index > 0)
                {
                    return new int[] { i, index - 1};
                }

                if (!pairs.ContainsKey(temp))
                {
                    pairs.Add(temp, i + 1);
                }
            }

            return new int[] { 0, 0 };
        }
    }
}