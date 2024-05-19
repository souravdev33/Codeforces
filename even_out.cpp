#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int even_count = 0, odd_count = 0;

        for (int i = 0; i < n; i++) {
            int Ai;
            cin >> Ai;
            if (Ai % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }


        if (odd_count==0) {
            cout<<n<<endl;
        } else

            cout<<n -1 <<endl;
        }
    }

    return 0;
}
