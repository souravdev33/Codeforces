#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;

    for (i = 2; i <= n; i++)
    {
        bool isPrime = true; // Assume i is prime initially

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false; // i is divisible by j, so it's not prime
                break; // No need to continue checking
            }
        }

        if (isPrime)
        {
            cout << i << ' ';
        }
    }

    return 0;
}
