#include<iostream>
#include<iomanip> 
using namespace std;

int main() {
    int a, b;
    double x;

    cin >> a >> b;

    x = (b * 100.0)/(100.0 - a);

    cout << fixed << setprecision(2) << x << endl;
    return 0;
}
