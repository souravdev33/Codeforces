#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int a[100],count=0;

    cin>>a[0]>>a[1]>>a[2]>>a[3];

    sort(a,a+4);

    for(int i=1;i<4;i++)
    {
        if(a[i]==a[i-1])
        {
            count++;
        }
    }

    cout<<count;
return 0;

}
