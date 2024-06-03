#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long
typedef pair<int, int> II;
typedef vector<II> VII;
typedef vector<int> VI;
typedef vector<VI> VVI;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> b(n);
    set<int> bArr;
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        bArr.insert(b[i]);
    }
    multiset<int> req;
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i])
            req.insert(b[i]);
    }

    int m;
    cin >> m;
    bool done = false;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        if (req.find(x) != req.end()) {
            req.erase(req.find(x));
            if (i == m - 1)
                done = true;
        } else if (bArr.count(x)) {
            if (i == m - 1)
                done = true;
        }
    }

    if (done && (req.size() == 0)) {
        cout << "YES\n";
    } else
        cout << "NO\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int totalTests = 1;
    cin >> totalTests;
    for (int testNo = 1; testNo <= totalTests; testNo++) {
        solve();
    }
 return 0;
}