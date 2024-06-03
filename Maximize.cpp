#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, pb, ps;
        cin >> n >> k >> pb >> ps;

        vector<int> p(n + 1); // permutation array
        vector<int> a(n + 1); // score array

        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
        }

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        // Simulate the game for k turns
        long long score_bodya = 0, score_sasha = 0;
        for (int i = 0; i < k; ++i) {
            // Update scores for Bodya and Sasha
            score_bodya += a[pb];
            score_sasha += a[ps];

            // Update positions for Bodya and Sasha
            pb = p[pb];
            ps = p[ps];
        }

        // Determine the winner
        if (score_bodya > score_sasha) {
            cout << "Bodya\n";
        } else if (score_bodya < score_sasha) {
            cout << "Sasha\n";
        } else {
            cout << "Draw\n";
        }
    }

    return 0;
}
