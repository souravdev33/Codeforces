#include <iostream>
#include <unordered_set>

using namespace std;

bool isFibonacciLike(int n, int k) {
    int a = 0, b = 1;
    while (b <= n) {
        if (b == n) return true;
        int temp = b;
        b += a;
        a = temp;
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (isFibonacciLike(n, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
