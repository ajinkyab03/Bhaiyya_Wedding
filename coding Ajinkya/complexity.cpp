//(1)
int FindMaxElement(int[] array)
{
        int max = int.MinValue;
        for (int i = 1; i < array.Length; i++)
        {
             if (array[i] > max)
             {
                   max = array[i];
             }
        }
        return max;
}
 //Time complexity is:O(n)


 //(2)
int FindInversions (int[] array)
{
    int inversions = 0;
    for (int i = 0; i < array.Length() - 1; i++)
    {
        for (int j = i + 1; j < array.Length(); j++)
        {
            if (array[i] > array[j])
            {
                inversions++;
            }
        }
    }
    return inversions;
}
//Time complexity is :O(n^2)


//(3)
long SumMN(int n, int m)
{
    long sum = 0;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= m; y++)
        {
            if (x == y)
            {
                for (int i = 1; i <= n; i++)
                {
                    sum += i * x * y;
                }
            }
        }
    }
    return sum;
}
//Time complexity:O((n^2)*m)

//(4)
long Fibonacci(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
  }
//Time complexity:O(2^n)