#include <bits/stdc++.h>
using namespace std;

#define ll long long

void yes() {
    cout << "YES\n";
}

void no() {
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> str(n);

        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }

        int count = 0; // Reset count for each test case

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < str[i].size(); j++) {
                if (str[i][j] == str[i + 1][j]) {
                    count++;
                    break;
                }
            }
        }

        if (count == 0) {
            yes();
        } else {
            no();
        }
    }

    return 0;
}
