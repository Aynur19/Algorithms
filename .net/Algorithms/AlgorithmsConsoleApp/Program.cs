using AlgorithmsConsoleApp;


//Func<double, double> func;
//func = (x) => x * Math.Sqrt(x * x * x + 1) - x * x;


//int count = 1000000;
//var startTime = System.Diagnostics.Stopwatch.StartNew();
////(double, double) xy = OneDimensionalOptimization.UniformSearch(func, -1, 2, 0.001, true);
//var resultsXY = OneDimensionalOptimization.UniformSearchAll(func, -1, 2, 0.001, true);

//Console.WriteLine($"(x, y): {resultsXY.Item1}, {resultsXY.Item2}");

//for (int i = 0; i < count; i++)
//{
//    xy = OneDimensionalOptimization.UniformSearch(func, -1, 2, 0.001, true);
//}

//startTime.Stop();
//var resultTime = startTime.Elapsed;

//// elapsedTime - строка, которая будет содержать значение затраченного времени
//string elapsedTime = $"{resultTime.Hours:00}:" +
//                     $"{resultTime.Minutes:00}:" +
//                     $"{resultTime.Seconds:00}." +
//                     $"{resultTime.Milliseconds:000}";

//Console.WriteLine($"{count} operations for {elapsedTime} time");


//for (int i = 0, k = 0; i < nums2.Length; i++)
//{


//    while (nums1[k] < nums2[i])
//    {
//        if (nums1[k] == 0)
//        {
//            nums1[k] = nums2[i];
//            continue;
//        }
//        k++;
//    }

//    for(int j = nums1.Length - 1; j > k; j--)
//    {
//        nums1[j] = nums1[j - 1];
//    }

//    nums1[k] = nums2[i];
//}

int[] nums1 = new int[] { 1, 2, 3, 0, 0, 0 };
int m = 3;
int[] nums2 = new int[] { 2, 5, 6 };
int n = 3;

//int[] nums1 = new int[] { 0 };
//int m = 0;
//int[] nums2 = new int[] { 1 };
//int n = 1;

//int[] nums1 = new int[] { 1 };
//int m = 1;
//int[] nums2 = new int[] { 0 };
//int n = 0;

OneDimensionalOptimization.Merge(nums1, 3, nums2, 3);

for (int i = 0; i < nums1.Length; i++)
{
    Console.WriteLine(nums1[i]);
}
