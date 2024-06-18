#include <iostream>
using namespace std;

int main() {
    int N, M,temp;

    while (cin >> N >> M) {
        if (N <= 0 || M <= 0) {
            break;
        }

        if(N>M)
        {
            temp=M;
            M=N;
            N=temp;
        }

        int sum = 0;
        for (int i = N; i <= M; i++) {
            sum += i;
            cout << i << ' ';
        }

        cout << "sum =" <<sum<< endl;
    }

    return 0;
}
