#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        string str1;
        cin >> str1;

        string res;
        res.push_back(str1[0]);

        for (int i = 1; i < x; i++) {
            if ((str1[i] == 'b' || str1[i] == 'c' || str1[i] == 'd') && (str1[i - 1] == 'b' || str1[i - 1] == 'c' || str1[i - 1] == 'd')) {
                res.push_back('.');
            }
            res.push_back(str1[i]);

            if ((str1[i] == 'a' || str1[i] == 'e') && (i + 2 < x) && (str1[i + 1] == 'b' || str1[i + 1] == 'c' || str1[i + 1] == 'd') && (str1[i + 2] == 'a' || str1[i + 2] == 'e')) {
                res.push_back('.');
            }
        }

        cout << res << endl;
    }

    return 0;
}
