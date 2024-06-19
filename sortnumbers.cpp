#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int arr[] = {A, B, C};
    sort(arr, arr + 3);

    cout << arr[0] <<endl<< arr[1] <<endl<< arr[2] << endl;

    cout << endl;
    cout << A <<endl<< B <<endl<< C << endl;

    return 0;
}
