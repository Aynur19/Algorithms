namespace LeetCodeTasksLibrary
{
    public class Task_0088
    {
        public static void Merge(int[] nums1, int m, int[] nums2, int n)
        {
            if (n == 0)
            {
                return;
            }

            if (m == 0)
            {
                for(; n > 0; n--)
                {
                    nums1[^n] = nums2[^n];
                }

                return;
            }

            int j = 0;
            while(nums1.Length >  m)
            {
                if (nums1[j] < nums2[^n] && j >= m)
                {
                    for (; j < nums1.Length; j++, n--)
                    {
                        nums1[j] = nums2[^n];
                    }

                    return;
                }

                if (nums1[j] < nums2[^n] && j < m)
                {
                    j++;
                    continue;
                }
                

                if (nums1[j] >= nums2[^n])
                {
                    for (int l = nums1.Length - 1; l > j; l--)
                    {
                        nums1[l] = nums1[l - 1];
                    }

                    nums1[j] = nums2[^n];
                    j++;
                    m++;
                    n--;
                }
            }
        }
    }
}