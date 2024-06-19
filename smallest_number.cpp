#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        // Calculate the maximum possible sum using the first k integers
        long long max_sum = (k * (2 * n - k + 1)) / 2;

        // Check if it's possible to choose k distinct integers between 1 and n
        // such that their sum is equal to x
        if (x >= k && x <= max_sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
