


using AlgorithmsConsoleApp;

Func<double, double> func;

func = (x) => x * Math.Sqrt(x * x * x + 1) - x * x;

(double, double) xy = OneDimensionalOptimization.UniformSearch(func, -1, 2, 0.001);
Console.WriteLine($"Option 1: ({xy.Item1}, {xy.Item2})");


