#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        // Total points must be even for a valid set of games
        int totalPoints = p1 + p2 + p3;
        if (totalPoints % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        // Check if the scores are in a possible range for any valid game outcome
        if (p3 > p1 + p2) {
            cout << -1 << endl;
            continue;
        }

        // Maximize draws
        int D = (p1 + p2 + p3) / 2 - p3;
        cout << max(0, D) << endl;
    }

    return 0;
}
