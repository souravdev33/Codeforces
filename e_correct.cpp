#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define MOD 1000000007
#define MOD2 998244353

string input() {
    string s;
    getline(cin, s);
    return s;
}

int inputInt() {
    return stoi(input());
}

vector<int> splitToInt(string s) {
    vector<int> result;
    size_t pos = 0;
    while ((pos = s.find(' ')) != string::npos) {
        result.push_back(stoi(s.substr(0, pos)));
        s.erase(0, pos + 1);
    }
    result.push_back(stoi(s));
    return result;
}

vector<vector<int>> transpose(vector<vector<int>>& mat) {
    int n = mat.size();
    vector<vector<int>> t(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            t[j][i] = mat[i][j];
        }
    }
    return t;
}

void sol() {
    int n, m;
    vector<int> nm = splitToInt(input());
    n = nm[0];
    m = nm[1];
    vector<vector<int>> grid1(n);
    vector<vector<int>> grid2(n);
    for (int i = 0; i < n; i++) {
        grid1[i] = splitToInt(input());
    }
    for (int i = 0; i < n; i++) {
        grid2[i] = splitToInt(input());
    }

    if (n == m) {
        set<set<int>> stt;
        for (auto v : grid1) {
            set<int> cur(v.begin(), v.end());
            stt.insert(cur);
        }
        for (auto v : grid2) {
            set<int> cur(v.begin(), v.end());
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        grid1 = transpose(grid1);
        grid2 = transpose(grid2);
        stt.clear();
        for (auto v : grid1) {
            set<int> cur(v.begin(), v.end());
            stt.insert(cur);
        }
        for (auto v : grid2) {
            set<int> cur(v.begin(), v.end());
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    } else {
        set<set<int>> stt;
        for (auto v : grid1) {
            set<int> cur(v.begin(), v.end());
            stt.insert(cur);
        }
        for (auto v : grid2) {
            set<int> cur(v.begin(), v.end());
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        stt.clear();
        for (int j = 0; j < m; j++) {
            set<int> cur;
            for (int i = 0; i < n; i++) {
                cur.insert(grid1[i][j]);
            }
            stt.insert(cur);
        }
        for (int j = 0; j < m; j++) {
            set<int> cur;
            for (int i = 0; i < n; i++) {
                cur.insert(grid2[i][j]);
            }
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
}

int main() {
    int t = inputInt();
    for (int i = 0; i < t; i++) {
        sol();
    }
    return 0;
}
