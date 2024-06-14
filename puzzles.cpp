#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x=1000;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
         cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<=m-n;i++)
    {
        x=min(x,a[i+n-1]-a[i]);
    }

    cout<<x;
return 0;
}
