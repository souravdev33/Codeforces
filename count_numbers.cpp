
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
        {
        string line;
        getline(cin, line);

        int count = 0;
        bool inNumber = false;

        for (char c : line) {
            if (c != ' ') {
                inNumber = true;
            } else if (inNumber) {
                count++;
                inNumber = false;
            }
        }

        if (inNumber){
            count++;
        }


        cout<<count<<endl;
    }

    return 0;
}
