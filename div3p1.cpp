
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> leftCoins(n);
        vector<int> rightCoins(m);

        for (int i = 0; i < n; ++i) {
            cin >> leftCoins[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> rightCoins[i];
        }

        sort(leftCoins.begin(), leftCoins.end());
        sort(rightCoins.begin(), rightCoins.end());

        int ans = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (leftCoins[i] + rightCoins[j] <= k) {
                    ans++;
                } else {
                    // Since the arrays are sorted, if the sum exceeds k, no need to check further for this i.
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
