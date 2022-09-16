namespace AlgorithmsConsoleApp
{
    public class OneDimensionalOptimization
    {

        public static (double, double) UniformSearch(Func<double, double> func, double left, double right, double eps)
        {
            double segmentLenght = (right - left) / ((right - left) / eps);
            
            double currentX = left;
            double currentY = func(currentX);

            double newY = func(currentX + segmentLenght);

            //int iters = 1;
            //Console.WriteLine($"{iters} (x, y): ({currentX}, {currentY})");

            while (currentY > newY)
            {
                //iters++;
                currentX += segmentLenght;
                currentY = func(currentX);
                newY = func(currentX + segmentLenght);
            }

            return (currentX, currentY);
        }
    }
}
