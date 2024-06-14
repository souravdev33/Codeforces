#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;

    cin>>n;
    vector<int>gifts(101);

    for(int i=1;i<=n;i++)
    {
        cin>>k;
        gifts[k]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<gifts[i]<<" ";

    }
    return 0;
}
