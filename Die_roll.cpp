#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;

    int n=min(x,y);
    int m=max(x,y);

    cout<<n/n<<'/'<<m/n<<endl;
return 0;
}
