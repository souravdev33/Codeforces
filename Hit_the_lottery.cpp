#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    int bills[10]={100,20,10,5,1};
    int count=0,x;

    for(int i=0;i<5;i++)
    {
        x=n/bills[i];
        count +=x;
        n%=bills[i];
    }

    cout<<count<<endl;

return 0;
}
