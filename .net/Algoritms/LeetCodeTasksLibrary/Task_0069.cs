namespace LeetCodeTasksLibrary
{
    public class Task_0069
    {
        public static int MySqrt(int x)
        {
            int result = x / 2;
            while (result * result > x)
            {
                result /= 2;
            }

            if (result * result == x)
            {
                return result;
            }

            do
            {
                result++;
            }
            while (result * result < x);


            if (result * result == x)
            {
                return result;
            }
            else
            {
                return result - 1;
            }
        }
    }
}
