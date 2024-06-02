#include <iostream>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    // Calculate the maximum number of Katryoshkas based on available parts
    long long max_katryoshkas = min(min(n / 2, m), k);

    cout << max_katryoshkas << endl;

    return 0;
}
