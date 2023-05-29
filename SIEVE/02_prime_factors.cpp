vector<int> findPrimeFactors(int N)
{
    vector<int> primes;
    bool sieve[int(sqrt(N)) + 1];
    memset(sieve, true, sizeof(sieve));

    for (int p = 2; p * p <= N; p++)
    {
        if (sieve[p])
        {
            primes.push_back(p);
            for (int i = p * p; i <= sqrt(N); i += p)
            {
                sieve[i] = false;
            }
        }
    }

    vector<int> factors;
    for (int i = 0; i < primes.size(); i++)
    {
        while (N % primes[i] == 0)
        {
            factors.push_back(primes[i]);
            N /= primes[i];
        }
    }

    if (N > 1)
    {
        factors.push_back(N);
    }
    return factors;
}