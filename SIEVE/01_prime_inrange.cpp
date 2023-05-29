void sieveOfEratosthenes(int n)
{
    // Create a boolean array "isPrime[0..n]" and initialize
    // all entries it as true.
    std::vector<bool> isPrime(n + 1, true);

    for (int p = 2; p * p <= n; ++p)
    {
        // If isPrime[p] is not changed, then it is a prime
        if (isPrime[p])
        {
            // Update all multiples of p
            for (int i = p * p; i <= n; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; ++p)
    {
        if (isPrime[p])
        {
            std::cout << p << " ";
        }
    }
}