bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}