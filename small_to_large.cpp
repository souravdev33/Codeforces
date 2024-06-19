#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=1;i<=t;i++)
    {
        int arr[3];

        for (int j=0;j<3;j++)
        {
            cin>>arr[j];
        }

        sort(arr,arr+3);

        cout << "Case " << i << ": " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }

    return 0;
}
