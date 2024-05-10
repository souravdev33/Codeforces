unsigned long long factorial(int n)
{
	const unsigned int M = 1000000007;
	unsigned long long f = 1;

	for (int i = 1; i <= n; i++)
		f = f * i; // WRONG APPROACH as
					// f may exceed (2^64 - 1)

	return f % M;
}

// This code is contributed by Shubham Singh
