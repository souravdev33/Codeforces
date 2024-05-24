#include <iostream>
#include <vector>
using namespace std;

int main() {
    int test;
    cin>>test;

    for (int k=1;k<=test;k++)
        {
        int n, a, b;
        cin >>n>>a>b;
        vector<int>ara(n);

        for (int i=0;i<n;i++)
        {
            cin >> ara[i];
        }

        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum = ara[i] + ara[j];
                if (sum >= a && sum <= b) {
                    count++;
                }
            }
        }

        cout << "Case " << k << ": " << count << endl;
    }

    return 0;
}
