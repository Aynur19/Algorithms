using AlgorithmsConsoleApp;


Func<double, double> func;
func = (x) => x * Math.Sqrt(x * x * x + 1) - x * x;


int count = 1000000000;
var startTime = System.Diagnostics.Stopwatch.StartNew();

for (int i = 0; i < count; i++)
{
    (double, double) xy = OneDimensionalOptimization.UniformSearch(func, -1, 2, 0.001);
    //Console.WriteLine($"iter {i}: ({xy.Item1}, {xy.Item2})");
}

startTime.Stop();
var resultTime = startTime.Elapsed;

// elapsedTime - строка, которая будет содержать значение затраченного времени
string elapsedTime = $"{resultTime.Hours:00}:" +
                     $"{resultTime.Minutes:00}:" +
                     $"{resultTime.Seconds:00}." +
                     $"{resultTime.Milliseconds:000}";

Console.WriteLine($"{count} operations for {elapsedTime} time");

