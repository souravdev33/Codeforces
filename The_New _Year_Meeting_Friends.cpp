#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=max({a,b,c})-min({a,b,c});
    cout<<x<<endl;

return 0;
}

