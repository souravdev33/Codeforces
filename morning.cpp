#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        cout << abs(str[0] - '1') + abs(str[1] - str[0]) + abs(str[2] - str[3]) + abs(str[3] - str[2]) << endl;
    }

    return 0;
}
