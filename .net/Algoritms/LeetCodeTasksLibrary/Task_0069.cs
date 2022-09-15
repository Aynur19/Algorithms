namespace LeetCodeTasksLibrary
{
    public class Task_0069
    {
        public static int MySqrt(int x)
        {
            if (x < 4)
            {
                return 1;
            }
            else if (x < 9)
            {
                return 2;
            }

            int right = x/2;
            int left = 2;
            bool isDone = false;

            while (true)
            {
                if(right * right / right != right || right * right > x)
                {
                    right -= (right - left) / 2;
                }
                else if (right * right == x || (right + 1) * (right + 1) > x)
                {
                    return right;
                }
                else
                {
                    left = right;
                    right *= 2;
                }
            }
        }
    }
}
