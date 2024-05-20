#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, i, fact = 1;

  cin >> t;
  while (t--) {
    cin >> n;
    for (i = 1; i <= n; i++) {
      fact *= i;
    }
    cout << fact << endl;
    fact = 1;
  }

  return 0;
}
