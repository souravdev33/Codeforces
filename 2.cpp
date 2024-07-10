#include <iostream>
#include <string>
using namespace std;

int minCuts(string s) {
    int n = s.length();
    int count0 = 0, count1 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            count0++;
        } else {
            count1++;
        }
    }
    if (count0 == 0 || count1 == 0) {
        return 0;
    }
    if (count0 == n || count1 == n) {
        return 1;
    }
    int res = min(count0, count1);
    count0 -= res;
    count1 -= res;
    return res + max(count0, count1);
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        cout << minCuts(s) << endl;
    }
    return 0;
}
