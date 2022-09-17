namespace AlgorithmsConsoleApp
{
    public class OneDimensionalOptimization
    {
        public static void Merge(int[] nums1, int m, int[] nums2, int n)
        {
            if (n == 0)
            {
                return;
            }

            if(m == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    nums1[i] = nums2[i];
                }

                return;
            }

            for (int i = 0, k = 0; i < nums2.Length; i++)
            {
                if(nums1[k] == 0)
                {
                    nums1[k] = nums2[i];
                    k++;

                    continue;
                }

                while (k < nums1.Length && nums1[k] < nums2[i])
                {
                    if (nums1[k] == 0)
                    {
                        nums1[k] = nums2[i];
                        continue;
                    }
                    k++;
                }

                for (int j = nums1.Length - 1; j > k; j--)
                {
                    nums1[j] = nums1[j - 1];
                }
                nums1[k] = 0;

                //nums1[k] = nums2[i];
            }

            //for (int i = 0; i < nums1.Length; i++)
            //{
            //    Console.WriteLine(nums1[i]);
            //}
        }

        public static (double, double) UniformSearch(Func<double, double> func, double left, double right, double eps, bool verbose = false)
        {
            double segmentLenght = (right - left) / ((right - left) / eps);
            
            double currentX = left;
            double currentY = func(currentX);

            double newY = func(currentX + segmentLenght);

            int iters = 1;

            if (verbose)
            {
                Console.WriteLine($"*** One Dimensional Optimization ***");
                Console.WriteLine($"*** START (Uniform Search) ***");
                Console.WriteLine($"One Dimensional Optimization {iters} => (x, y): ({currentX}, {currentY})");
                Console.WriteLine($"  Iteration {iters} => (x, y): ({currentX}, {currentY})");
            }

            while (currentY > newY)
            {
                currentX += segmentLenght;
                currentY = func(currentX);
                newY = func(currentX + segmentLenght);
                if (verbose)
                {
                    iters++;
                    Console.WriteLine($"  Iteration {iters} => (x, y): ({currentX}, {currentY})");
                }
            }

            Console.WriteLine($"*** END (Uniform Search) ***");
            Console.WriteLine($"*** One Dimensional Optimization ***");

            return (currentX, currentY);
        }

        public static (double, double) UniformSearchAll(Func<double, double> func, double left, double right, double eps, bool verbose = false)
        {
            double segmentLenght = (right - left) / ((right - left) / eps);

            double currentX = left;
            double currentY = func(currentX);

            double newY = func(currentX + segmentLenght);
            
            double minX = currentX;
            double minY = currentY;
            
            int iters = 1;

            if (verbose)
            {
                Console.WriteLine($"*** One Dimensional Optimization ***");
                Console.WriteLine($"*** START (Uniform Search) ***");
                Console.WriteLine($"One Dimensional Optimization {iters} => (x, y): ({currentX}, {currentY})");
                Console.WriteLine($"  Iteration {iters} => (x, y): ({currentX}, {currentY})");
            }

            while (currentX <= right)
            {
                if (minY >= currentY)
                {
                    minX = currentX;
                    minY = currentY;
                }

                currentX += segmentLenght;
                currentY = func(currentX);
                newY = func(currentX + segmentLenght);
                
                if (verbose)
                {
                    iters++;
                    Console.WriteLine($"  Iteration {iters} => (x, y): ({currentX}, {currentY})");
                }
            }

            Console.WriteLine($"*** END (Uniform Search) ***");
            Console.WriteLine($"*** One Dimensional Optimization ***");

            return (minX, minY);
        }
    }
}
