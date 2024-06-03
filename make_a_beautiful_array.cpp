#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        int max_beauty_factor = -1;
        int peak_count = 0;
        int increasing_phase_start = 0;
        int decreasing_phase_start = 0;
        for (int i = 1; i < n; ++i) {
            if (A[i] > A[i - 1]) {
                if (decreasing_phase_start > 0) {
                    peak_count++;
                }
                increasing_phase_start = i;
            } else if (A[i] < A[i - 1]) {
                decreasing_phase_start = i;
            }
        }
        if (increasing_phase_start > 0 && decreasing_phase_start > 0) {
            max_beauty_factor = n /peak_count;
        }
        cout << "Case " << t << ": " << max_beauty_factor << endl;
    }
    return 0;
    return of the crow



}
