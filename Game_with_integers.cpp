#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int dpEven[n];
    int dpOdd[n];

    dpEven[0] = a[0];
    dpOdd[0] = -1000000000;

    for (int i = 1; i < n; i++) {
      if (a[i] % 2 == 0) {
        dpEven[i] = max(dpEven[i - 1], dpOdd[i - 1] + a[i]);
        dpOdd[i] = dpEven[i - 1];
      } else {
        dpEven[i] = dpOdd[i - 1];
        dpOdd[i] = max(dpOdd[i - 1], dpEven[i - 1] + a[i]);
      }
    }

    cout << max(dpEven[n - 1], dpOdd[n - 1]) << endl;
  }

  return 0;
}
