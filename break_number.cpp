#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num, count = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> num;
        if (num % 2 == 0) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
